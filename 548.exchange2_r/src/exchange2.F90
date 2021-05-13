module logic

integer, parameter :: rank=3, rank2=rank*rank, total=rank2*(rank2+1)/2

integer :: two_in_a_bed(2), three_in_a_bed, clear_out, four, to_do, fiendish,  naked3
logical, parameter ::  new = .false.

contains

subroutine new_solver(part, block, complete, key, changed)
implicit none
integer :: i, j, k, row, col, val, boxr, boxc, remember, block(:, :, :), part(:, :) , &
           cycles, non_zeroes , difficulty_index, key , sumblock 
logical :: complete, changed, expensive
!
! initialize
cycles = 0
complete = .false.
expensive = .false.
block = 0
do i = 1, rank2
   do j = 1, rank2
      if (part(i, j) == 0) block(i, j, :) = (/ (k, k= 1, rank2) /) 
   end do 
end do
non_zeroes     = count(part /= 0)
to_do          = 0
two_in_a_bed   = 0 
three_in_a_bed = 0
naked3         = 0     ! <----- misnomer: should be hidden3
four           = 0
clear_out      = 0
fiendish       = huge(0)  
!
!  initial elimination on row, column and box
do row = 1, rank2
   do col = 1, rank2
      if(part(row, col) == 0) cycle
      where (block(row, :, part(row, col)) == part(row, col)) block(row, :, part(row, col)) = 0     
       where (block(:, col, part(row, col)) == part(row, col)) block(:, col, part(row, col)) = 0 
       where (block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank,                          &
                      ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, part(row, col)) ==       &
                                                                       part(row, col))          &
             block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank,                          &
                      ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, part(row, col)) = 0
   end do
end do   
!
! loop until no more change
do 
sumblock= count(block /= 0)
changed = .false.
cycles = cycles + 1              !;if(key==1.and.cycles == 2) exit   ! for no_singles
!
!  eliminate on 'pairs' (not on first cycle because of difficulty-index calculation)
if (expensive) then
   call naked_pairs
!
!  eliminate on 'triplets'
  if(sumblock == count(block /= 0)) call hidden_pairs
!
!  eliminate on 'triplets'
   if(sumblock == count(block /= 0)) call naked_triplets
   if(sumblock == count(block /= 0)) call hidden_triplets
!   
!  eliminate on 'quadruplets'
!!!      if(rank > 3) call naked_quadruplets
!
!  eliminate on specific groups
   if(sumblock == count(block /= 0)) call specific
   if(sumblock == count(block /= 0)) call x_wing
end if
!
! fix single values overall 
remember = count(part == 0)
do row = 1, rank2
   do col =1, rank2
      if(part(row, col) /= 0) cycle
       if(count(block(row, col, :) /= 0) == 1) then
          part(row, col) = block(row, col, maxloc(block(row, col, :), dim= 1))
           call update
      end if
   end do
end do
!
! fix single values in rows
do row = 1, rank2
v1: do val = 1, rank2
      if(count(block(row, :, val) == val) /= 1) cycle
          do col = 1, rank2
              if(part(row, col) /= 0) cycle
               if(block(row, col, val) == val) then
                  part(row, col) = val
                 call update
                  exit v1
            end if
         end do
   end do v1 
end do
!
! fix single values in columns
do col = 1, rank2
v2: do val = 1, rank2
      if(count(block(:, col, val) == val) /= 1) cycle
          do row = 1, rank2
              if(part(row, col) /= 0) cycle
               if(block(row, col, val) == val) then
                  part(row, col) = val
                 call update
                  exit v2
            end if
         end do
   end do v2 
end do
!
! fix single values in boxes
do boxr = 0, rank-1
   do boxc = 0, rank-1
v3:   do val = 1, rank2
      if(count(block(boxr*rank+1:boxr*rank+rank, boxc*rank+1:boxc*rank+rank, val)==val)/= 1) cycle
          do row = boxr*rank+1, boxr*rank+rank
              do col = boxc*rank+1, boxc*rank+rank
                 if(part(row, col) /= 0) cycle
                  if(block(row, col, val) == val) then
                     part(row, col) = val
                       call update
                     exit v3
               end if
            end do
         end do
      end do v3
   end do  
end do
!
if(changed .and. count(part == 0) /= 0) fiendish = min(fiendish, remember - count(part == 0) ) 
if(cycles == 1) to_do = count(block /= 0) + count(part == 0)
if(sumblock /= count(block /= 0)) expensive =.false.
if(.not.changed .and. cycles > 1 ) then 
   if(expensive ) then  
     cycles = cycles - 1
      exit
   else
      expensive = .true.
   end if
end if  
if(all(part /= 0)) exit                          
!if(key==1) then 
!    if(count(block /= 0) /= sumblock) changed = .true.
 !   if(changed) exit
!end if    
end do 
!if(key == 1 .and. count(block /= 0) /= sumblock) changed = .true.
!
! output intermediate result
Difficulty_Index = (count(block /= 0) + count(part == 0 ) + to_do + two_in_a_bed(1) +         &
              rank2*cycles + two_in_a_bed(2) + three_in_a_bed + naked3 + clear_out)/rank2 - rank2


!
!    check complete
if(sum(part) == rank2*total) then
   complete = .true.
!   write(*, "(' complete')")
end if

contains

subroutine update
!
! update a cell 
   block(row, col, :) = 0
   changed = .true.
!
! and its surroundings
   where (block(row, :, part(row, col)) == part(row, col))     block(row, :, part(row, col)) = 0     
   where (block(:, col, part(row, col)) == part(row, col))     block(:, col, part(row, col)) = 0 
   where (block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank,                          &
                   ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, part(row, col))==part(row, col)) &
          block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank,                                  &
                   ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, part(row, col)) = 0
 
end subroutine update

subroutine x_wing
implicit none
integer ::  val, col1, col2, row1, row2
!
!  eliminate possibilities caused by 2 exact hits of a given value in two rows and same columns
do row1 = 1, rank2 - 1
   if(count(part(row1, :) == 0) < 2) cycle
   do val = 1, rank2
       if(count(block(row1, :, val) == val) /= 2) cycle
       col1 = maxloc(block(row1, :, val), dim = 1)
       col2 = rank2 + 1 - maxloc(block(row1, rank2:1:-1, val), dim = 1)
      do row2 = row1 + 1, rank2
         if(count(part(row2, :) == 0) < 2) cycle
         if(part(row2, col1) /= 0 ) cycle
         if(part(row2, col2) /= 0 ) cycle
          if(count(block(row2, :, val) == val) /= 2) cycle
          if(col1 /= maxloc(block(row2, :, val), dim = 1)) cycle
          if(col2 /= rank2 + 1 - maxloc(block(row2, rank2:1:-1, val), dim = 1)) cycle
          if(count(block(:, col1, val) == val) == 2) cycle
          if(count(block(:, col2, val) == val) == 2) cycle
          four = four + count(block(:, col1, val) == val) - 2
          where (block(:, col1, val) == val) block(:, col1, val) = 0  
           four = four + count(block(:, col2, val) == val) - 2
          where (block(:, col2, val) == val) block(:, col2, val) = 0   
         block(row1, col1, val) = val
          block(row1, col2, val) = val
          block(row2, col1, val) = val
          block(row2, col2, val) = val
          return
      end do
   end do 
end do
!
!  eliminate possibilities caused by 2 exact hits of a given value in two columns and same rows
 do col1 = 1, rank2 - 1
   if(count(part(:, col1) == 0) < 2) cycle
   do val = 1, rank2
       if(count(block(:, col1, val) == val) /= 2) cycle
       row1 = maxloc(block(:, col1, val), dim = 1)
       row2 = rank2 + 1 - maxloc(block(rank2:1:-1, col1, val), dim = 1)
      do col2 = col1 + 1, rank2
         if(count(part(:, col2) == 0) < 2) cycle
         if(part(row1, col2) /= 0 ) cycle
         if(part(row2, col2) /= 0 ) cycle
          if(count(block(:, col2, val) == val) /= 2) cycle
          if(row1 /= maxloc(block(:, col2, val), dim = 1)) cycle
          if(row2 /= rank2 + 1 - maxloc(block(rank2:1:-1, col2, val), dim = 1)) cycle
          if(count(block(row1, :, val) == val) == 2) cycle
          if(count(block(row2, :, val) == val) == 2) cycle
          four = four + count(block(row1, :, val) == val) - 2
          where (block(row1, :, val) == val) block(row1, :, val) = 0  
           four = four + count(block(row2, :, val) == val) - 2
          where (block(row2, :, val) == val) block(row2, :, val) = 0   
         block(row1, col1, val) = val
          block(row1, col2, val) = val
          block(row2, col1, val) = val
          block(row2, col2, val) = val
          return
      end do
   end do 
end do

end subroutine x_wing

subroutine specific
!
integer :: row, col, val, boxr, boxc, pos1(2), pos2(2), row1, col1, rmin, rmax , cmin, cmax
!
! fix single value in row all in same block
do row = 1, rank2
v1: do val = 1, rank2
      if(any(part(row, :) == val)) cycle
       if(count(block(row, :, val) == val) == 0) cycle
       pos1 = minloc(block(row, :, :), mask=block(row, :, :) == val)
       pos2 = minloc(block(row, rank2:1:-1, :), mask=block(row, rank2:1:-1, :) == val)
       pos2(1) = rank2 + 1 - pos2(1)
       if(pos1(1) == pos2(1)) cycle
       if( (pos1(1)-1)/rank == (pos2(1)-1)/rank) then    
          col = pos1(1) 
           do row1 = ((row-1)/rank)*rank+1, ((row-1)/rank)*rank+rank    
              if(row1 == row) cycle    
               clear_out = clear_out +                                                         &
               count (block(row1, ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, val) == val)
              where (block(row1, ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, val) == val)   & 
                   block(row1, ((col-1)/rank)*rank+1:((col-1)/rank)*rank+rank, val) = 0
           end do                   
      end if
   end do v1 
end do   
!
! fix single value in column all in same block
do col = 1, rank2
v2: do val = 1, rank2
      if(any(part(:, col) == val)) cycle
       if(count(block(:, col, val) == val) == 0) cycle
       pos1 = minloc(block(:, col, :), mask=block(:, col, :) == val)
       pos2 = minloc(block(rank2:1: -1, col, :), mask=block(rank2:1:-1, col, :) == val)
       pos2(1) = rank2 + 1 - pos2(1)
       if(pos1(1) == pos2(1)) cycle
       if( (pos1(1)-1)/rank == (pos2(1)-1)/rank)  then
          row = pos1(1)
           do col1 = ((col-1)/rank)*rank+1, ((col-1)/rank)*rank+rank
              if (col1 == col) cycle
               clear_out = clear_out +                                                       &
                count(block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank, col1, val) == val) 
              where (block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank, col1, val) == val) &  
                   block(((row-1)/rank)*rank+1:((row-1)/rank)*rank+rank, col1, val) = 0
           end do               
      end if
   end do v2 
end do   
!
! fix single value in box all in same row or column
do boxr = 0, rank-1
   do boxc = 0, rank-1
v3:   do val = 1, rank2
      if(any(part(boxr*rank+1:boxr*rank+rank, boxc*rank+1:boxc*rank+rank)==val)) cycle
       rmin = rank + 1
       do col1 = boxc*rank+1, boxc*rank+rank
          if(count(     block(boxr*rank+1:boxr*rank+rank, col1, val) == val) ==0) cycle
          pos1 = minloc(block(boxr*rank+1:boxr*rank+rank, col1 , :),                      &
                   mask=block(boxr*rank+1:boxr*rank+rank, col1, :) == val)
           rmin = min(rmin, pos1(1))             
      end do
       rmax = rank + 1
       do col1 = boxc*rank+1, boxc*rank+rank
       if(count(        block(boxr*rank+rank:boxr*rank+1:-1, col1, val) == val) ==0) cycle
          pos1 = minloc(block(boxr*rank+rank:boxr*rank+1:-1, col1 , :),                   &
                   mask=block(boxr*rank+rank:boxr*rank+1:-1, col1, :) == val)
           rmax = min(rmax, pos1(1))             
      end do
       rmin = rmin + boxr*rank
       rmax = rank + 1 - rmax + boxr*rank
       cmin = rank2 + 1
       do row1 = boxr*rank+1, boxr*rank+rank
       if(count(        block(row1, boxc*rank+1:boxc*rank+rank, val) == val) ==0) cycle
          pos2 = minloc(block(row1, boxc*rank+1:boxc*rank+rank,:),                       & 
                   mask=block(row1, boxc*rank+1:boxc*rank+rank,:) == val)
         cmin = min(cmin, pos2(1))
      end do
       cmax = rank2 + 1
       do row1 = boxr*rank+1, boxr*rank+rank
       if(count(        block(row1, boxc*rank+rank:boxc*rank+1:-1, val) == val) ==0) cycle
          pos2 = minloc(block(row1, boxc*rank+rank:boxc*rank+1:-1,:),   & 
                   mask=block(row1, boxc*rank+rank:boxc*rank+1:-1,:) == val)
         cmax = min(cmax, pos2(1))
      end do
       cmin = cmin + boxc*rank
       cmax = rank + 1 - cmax +boxc*rank
        if(rmin == rmax .and. cmin  /= cmax) then
          do col1 = 1, rank2
              if (col1 >= cmin .and. col1 <= cmax) cycle
               if(block(rmin, col1, val)  /= 0) clear_out = clear_out + 1
              block(rmin, col1, val)  = 0
           end do          
       else if(rmin /= rmax .and. cmin == cmax) then 
           do row1 = 1, rank2   
              if(row1 >= rmin .and. row1 <= rmax) cycle 
            if(block(row1, cmin, val)  /= 0) clear_out = clear_out + 1      
              block(row1, cmin, val)  = 0
           end do     
       end if      
      end do v3
   end do  
end do  

!
end subroutine specific

subroutine naked_pairs
implicit none
integer ::  val1, val2, cornerr, cornerc, col1, col2, row1, row2  
!
!  eliminate possibilities caused by pairs (2 and only 2 exact hits in a r/c/b)
do row = 1, rank2
   if(count(part(row, :) == 0) == 2) cycle
   do col1 = 1, rank2 - 1
      if(part(row, col1) /= 0 ) cycle
       if(count(block(row, col1, :) /= 0) /= 2) cycle
      do col2 = col1+1, rank2
         if(part(row, col2) /= 0) cycle
          if(count(block(row, col2, :) /= 0) /= 2) cycle
          if(any(block(row, col1, :) /= block(row, col2, :) ) ) cycle
          val1 = maxval(block(row, col1, :))
           two_in_a_bed(1) = two_in_a_bed(1) + count(block(row, :, val1) == val1) 
          where (block(row, :, val1) == val1) block(row, :, val1) = 0  
          val2 = maxval(block(row, col1, :))
           two_in_a_bed(1) = two_in_a_bed(1) + count(block(row, :, val2) == val2) 
          where (block(row, :, val2) == val2) block(row, :, val2) = 0   
         block(row, col1, val1) = val1
          block(row, col2, val1) = val1
          block(row, col1, val2) = val2
          block(row, col2, val2) = val2
          exit
       end do
   end do
end do
!
do col = 1, rank2
   if(count(part(:, col) == 0) == 2) cycle
   do row1 = 1, rank2 - 1
      if(part(row1, col) /= 0) cycle
       if(count(block(row1, col, :) /= 0) /= 2) cycle
      do row2 = row1+1, rank2
         if(part(row2, col) /= 0) cycle
          if(count(block(row2, col, :) /= 0) /= 2) cycle
          if(any(block(row1, col, :) /= block(row2, col, :) ) ) cycle
          val1 = maxval(block(row1, col, :))
           two_in_a_bed(1) = two_in_a_bed(1) + count(block(:, col, val1) == val1)
          where (block(:, col, val1) == val1) block(:, col, val1) = 0  
          val2 = maxval(block(row1, col, :))
           two_in_a_bed(1) = two_in_a_bed(1) + count(block(:, col, val2) == val2)
          where (block(:, col, val2) == val2) block(:, col, val2) = 0 
         block(row1, col, val1) = val1
          block(row2, col, val1) = val1
          block(row1, col, val2) = val2
          block(row2, col, val2) = val2
          exit
       end do
   end do
end do
!
do col1 = 1, rank2
   do row1 = 1, rank2
      if(part(row1, col1) /= 0) cycle
       if(count(block(row1, col1, :) /= 0) /= 2) cycle
       cornerr = (row1-1)/rank 
       cornerc = (col1-1)/rank
       if(count(part(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank) == 0)    &
             == 2) cycle
box:  do col2 = 1, rank2
         if(cornerc /= (col2-1)/rank ) cycle
         do row2 = 1, rank2
              if((row2-1)*rank2+col2 <= (row1-1)*rank2+col1 ) cycle
             if(part(row2, col2) /= 0) cycle
             if (cornerr /= (row2-1)/rank ) cycle
             if(count(block(row2, col2, :) /= 0) /= 2) cycle
             if(any(block(row1, col1, :) /= block(row2, col2, :) ) ) cycle
             val1 = maxval(block(row1, col1, :))   
               two_in_a_bed(1) = two_in_a_bed(1) +                                                        &
       count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1) == val1)                             
       where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1)==val1) &
             block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1) = 0
            val2 = maxval(block(row1, col1, :))  
               two_in_a_bed(1) = two_in_a_bed(1) +                                                        &
       count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2) == val2)
      where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2)==val2) &
             block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2) = 0
            block(row1, col1, val1) = val1
             block(row2, col2, val1) = val1
             block(row1, col1, val2) = val2
             block(row2, col2, val2) = val2
             exit box
          end do
       end do box
   end do
end do

end subroutine naked_pairs

subroutine hidden_pairs
implicit none
integer :: p1, p2, val1, val2, cornerr, cornerc, col1, col2, row1, row2, temp(rank2)  
!
!  eliminate possibilities caused by hidden pairs (2 pairs in a r/c/b, plus others)
r: do row = 1, rank2
   if(count(part(row, :) == 0) <= 2) cycle
   do val1 = 1, rank2 - 1
       if(count(block(row, :, val1) == val1) /= 2) cycle
      do val2 = val1+1, rank2
          if(count(block(row, :, val2) == val2) /= 2) cycle
           temp = block(row, :, val1)
          col1 = maxloc(temp, dim=1)
           temp(col1) = 0
         col2 = maxloc(temp, dim=1) 
           temp = block(row, :, val2)   
          if(col1 /= maxloc(temp, dim=1) ) cycle
           temp(col1) = 0               
          if(col2 /= maxloc(temp, dim=1) ) cycle 
           if(count(block(row, col1, :) /= 0) <= 2 .and.                           & 
             count(block(row, col2, :) /= 0) <= 2) cycle 
           two_in_a_bed(2) = two_in_a_bed(2) + count(block(row, col1, :) /= 0) - 2 &
                                             + count(block(row, col2, :) /= 0) - 2
         block(row, col1, :) = 0 
          block(row, col2, :) = 0   
         block(row, col1, val1) = val1
          block(row, col2, val1) = val1
          block(row, col1, val2) = val2
          block(row, col2, val2) = val2 
          cycle r
       end do
   end do
end do r
!
c: do col = 1, rank2
   if(count(part(:, col) == 0) <= 2) cycle
   do val1 = 1, rank2 - 1
       if(count(block(:, col, val1) == val1) /= 2) cycle
      do val2 = val1+1, rank2
          if(count(block(:, col, val2) == val2) /= 2) cycle
           temp = block(:, col, val1)
          row1 = maxloc(temp, dim=1)
           temp(row1) = 0         
          row2 = maxloc(temp, dim=1)
           temp = block(:, col, val2)
          if(row1 /= maxloc(temp, dim=1) ) cycle
           temp(row1) = 0
          if(row2 /= maxloc(temp, dim=1) ) cycle 
           if(count(block(row1, col, :) /= 0) <= 2 .and.                           & 
             count(block(row2, col, :) /= 0) <= 2) cycle 
           two_in_a_bed(2) = two_in_a_bed(2) + count(block(row1, col, :) /= 0) - 2 &
                                             + count(block(row2, col, :) /= 0) - 2
         block(row1, col, :) = 0  
          block(row2, col, :) = 0 
         block(row1, col, val1) = val1
          block(row2, col, val1) = val1
          block(row1, col, val2) = val2  
          block(row2, col, val2) = val2 
          cycle c
       end do
   end do
end do c      
!
do cornerr = 0, rank-1
box: do cornerc = 0, rank-1
       if(count(part(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank) == 0)    &
             <= 2) cycle
      do val1 = 1, rank2-1
         if(count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1) &
              == val1) /= 2) cycle
         do val2 = val1+1, rank2
         if(count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2) &
              == val2) /= 2) cycle
               temp = reshape(                                                                      &
               block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank, val1),     &
               (/rank2/) )
             p1 = maxloc(temp, dim=1)
               temp(p1) = 0
               p2 = maxloc(temp, dim=1)               
            temp = reshape(                                                                      &
               block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank, val2),     &
               (/rank2/) )
             if(p1 /= maxloc(temp, dim=1)) cycle
               temp(p1) = 0
               if(p2 /= maxloc(temp, dim=1)) cycle            
               row1 = cornerr*rank + mod(p1, rank)
               if(row1 == cornerr*rank) row1 = row1 + rank
               col1 = cornerc*rank + (p1-1)/rank + 1 
            row2 = cornerr*rank + mod(p2, rank) 
               if(row2 == cornerr*rank) row2 = row2 + rank
               col2 = cornerc*rank + (p2-1)/rank + 1   
               if(count(block(row1, col1, :) /= 0) <= 2 .and.                           &
                count(block(row2, col2, :) /= 0) <= 2) cycle 
               two_in_a_bed(2) = two_in_a_bed(2) + count(block(row1, col1, :) /= 0) - 2 &
                                                 + count(block(row2, col2, :) /= 0) - 2 
            block(row1, col1, :) = 0
               block(row2, col2, :) = 0
            block(row1, col1, val1) = val1
             block(row2, col2, val1) = val1
             block(row1, col1, val2) = val2
             block(row2, col2, val2) = val2  
             cycle box
          end do
       end do 
   end do box
end do  
!
end subroutine hidden_pairs

subroutine naked_triplets
implicit none
integer :: val1, val2, val3, cornerr, cornerc, col1, col2, col3, row1, row2, row3  
!
! eliminate possibilities due to triplets  (3 and only 3 exact hits in a r/c/b)
do row = 1, rank2
   if(count(part(row, :) == 0) ==3) cycle
   do col1 = 1, rank2 - 2
      if(part(row, col1) /= 0 ) cycle
       if(count(block(row, col1, :) /= 0) /= 3 ) cycle
      do col2 = col1+1, rank2 - 1
          if(part(row, col2) /= 0) cycle
           if(count(block(row, col2, :) /= 0) /= 3 ) cycle
           if(any(block(row, col1, :) /= block(row, col2, :) ) ) cycle
          do col3 = col2+1, rank2
            if(part(row, col3) /= 0) cycle
             if(count(block(row, col3, :) /= 0) /= 3) cycle
             if(any(block(row, col1, :) /= block(row, col3, :) ) ) cycle
            val1 = maxval(block(row, col1, :))
               three_in_a_bed = three_in_a_bed + count(block(row, :, val1) == val1) 
             where (block(row, :, val1) == val1) block(row, :, val1) = 0  
             val2 = maxval(block(row, col1, :))
               three_in_a_bed = three_in_a_bed + count(block(row, :, val2) == val2)
             where (block(row, :, val2) == val2) block(row, :, val2) = 0   
              val3 = maxval(block(row, col1, :))
               three_in_a_bed = three_in_a_bed + count(block(row, :, val3) == val3)
             where (block(row, :, val3) == val3) block(row, :, val3) = 0   
            block(row, col1, val1) = val1
             block(row, col2, val1) = val1
              block(row, col3, val1) = val1
             block(row, col1, val2) = val2
             block(row, col2, val2) = val2
             block(row, col3, val2) = val2
             block(row, col1, val3) = val3
              block(row, col2, val3) = val3
             block(row, col3, val3) = val3
             exit
         end do
       end do
   end do
end do
!
do col = 1, rank2
   if(count(part(:, col) == 0) == 3) cycle
   do row1 = 1, rank2 - 2
      if(part(row1, col) /= 0) cycle
       if(count(block(row1, col, :) /= 0) /= 3 ) cycle
      do row2 = row1+1, rank2 - 1
         if(part(row2, col) /= 0) cycle
           if(count(block(row2, col, :) /= 0) /= 3  ) cycle
           if(any(block(row1, col, :) /= block(row2, col, :) ) ) cycle
           do row3 = row2+1, rank2
            if(part(row3, col) /= 0) cycle
             if(count(block(row3, col, :) /= 0) /= 3) cycle
             if(any(block(row1, col, :) /= block(row3, col, :) ) ) cycle
             val1 = maxval(block(row1, col, :))
               three_in_a_bed = three_in_a_bed + count(block(:, col, val1) == val1) 
             where (block(:, col, val1) == val1) block(:, col, val1) = 0  
             val2 = maxval(block(row1, col, :))
               three_in_a_bed = three_in_a_bed + count(block(:, col, val2) == val2) 
             where (block(:, col, val2) == val2) block(:, col, val2) = 0 
              val3 = maxval(block(row1, col, :))
               three_in_a_bed = three_in_a_bed + count(block(:, col, val3) == val3) 
             where (block(:, col, val3) == val3) block(:, col, val3) = 0 
            block(row1, col, val1) = val1
             block(row2, col, val1) = val1
             block(row3, col, val1) = val1
             block(row1, col, val2) = val2
              block(row2, col, val2) = val2
             block(row3, col, val2) = val2
             block(row1, col, val3) = val3
              block(row2, col, val3) = val3
             block(row3, col, val3) = val3
             exit
         end do
       end do
   end do
end do
!
do col1 = 1, rank2
   do row1 = 1, rank2
      if(part(row1, col1) /= 0) cycle
       cornerr = (row1-1)/rank 
       cornerc = (col1-1)/rank
       if(count(part(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank) == 0) &
             == 3 ) cycle
      if(count(block(row1, col1, :) /= 0) /= 3 ) cycle
      do col2 = 1, rank2
          if(cornerc /= (col2-1)/rank) cycle
         do row2 = 1, rank2
              if((row2-1)*rank2+col2 <= (row1-1)*rank2+col1 ) cycle
             if(part(row2, col2) /= 0) cycle
               if (cornerr /= (row2-1)/rank ) cycle
               if(count(block(row2, col2, :) /= 0) /= 3 ) cycle
               if(any(block(row1, col1, :) /= block(row2, col2, :) ) ) cycle
box3:       do col3 = 1, rank2
               if(cornerc /= (col3-1)/rank ) cycle
               do row3 = 1, rank2
                  if((row3-1)*rank2+col3 <= (row2-1)*rank2+col2 ) cycle
                if(part(row3, col3) /= 0) cycle
                if (cornerr /= (row3-1)/rank) cycle
                if(count(block(row3, col3, :) /= 0) /= 3) cycle
                if(any(block(row1, col1, :) /= block(row3, col3, :) )) cycle
                val1 = maxval(block(row1, col1, :)) 
                  three_in_a_bed = three_in_a_bed +                                                 &
      count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1) == val1)                         
       where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1)==val1)&
             block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank, val1) = 0
               val2 = maxval(block(row1, col1, :))
                  three_in_a_bed = three_in_a_bed +                                                 &
      count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2) == val2)    
      where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2)==val2)&
             block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank, val2) = 0
                  val3 = maxval(block(row1, col1, :))  
                  three_in_a_bed = three_in_a_bed +                                                 &
      count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val3) == val3)         
      where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val3)==val3)&
                   block(cornerr*rank+1:cornerr*rank+rank,cornerc*rank+1:cornerc*rank+rank, val3) = 0
               block(row1, col1, val1) = val1
                block(row2, col2, val1) = val1
                block(row3, col3, val1) = val1
                block(row1, col1, val2) = val2
                  block(row2, col2, val2) = val2
                block(row3, col3, val2) = val2
                block(row1, col1, val3) = val3
                block(row2, col2, val3) = val3
                  block(row3, col3, val3) = val3
                exit box3
                  end do
               end do box3
          end do
       end do 
   end do
end do
end subroutine naked_triplets

subroutine hidden_triplets
implicit none
integer :: val1, val2, val3, cornerr, cornerc, col1, col2, col3, row1, row2, row3, values(rank2,3)  
!
! eliminate possibilities due to hidden triplets (not quite: the number of different values in
do row = 1, rank2                   ! 3 cells in a r/c/b is exactly 3, so they are not hidden)
   if(count(part(row, :) == 0) ==3) cycle  ! Ex.: 12,13,23 or 12,13,123 (all cells different)
   do col1 = 1, rank2 - 2
      if(part(row, col1) /= 0 ) cycle
       if(count(block(row, col1, :) /= 0) <= 1) cycle
       if(count(block(row, col1, :) /= 0) > 3 ) cycle
      do col2 = col1+1, rank2 - 1
          if(part(row, col2) /= 0) cycle
           if(count(block(row, col2, :) /= 0) <= 1) cycle
           if(all(block(row, col1, :) == block(row, col2, :))) cycle
           if(count(block(row, col2, :) /= 0) > 3  ) cycle
          do col3 = col2+1, rank2
            if(part(row, col3) /= 0) cycle
               if(count(block(row, col3, :) /= 0) <= 1) cycle
               if(all(block(row, col1, :) == block(row, col3, :))) cycle
               if(all(block(row, col2, :) == block(row, col3, :))) cycle
             if( count(block(row, col3, :) /= 0) > 3) cycle
             if(count(block(row, col1, :) + block(row, col2, :) +                             & 
                                              block(row, col3, :) /= 0) /= 3) cycle
            values(:, 1) = block(row, col1, :) 
             values(:, 2) = block(row, col2, :)  
              values(:, 3) = block(row, col3, :)  
            val1 = maxloc(block(row, col1, :) + block(row, col2, :) + block(row, col3, :), dim=1)
               naked3 = naked3 + count(block(row, :, val1) == val1) 
             where (block(row, :, val1) == val1) block(row, :, val1) = 0  
             val2 = maxloc(block(row, col1, :) + block(row, col2, :) + block(row, col3, :), dim=1)
               naked3 = naked3 + count(block(row, :, val2) == val2) - count(values /= 0)
             where (block(row, :, val2) == val2) block(row, :, val2) = 0   
              val3 = maxloc(block(row, col1, :) + block(row, col2, :) + block(row, col3, :), dim=1)
               naked3 = naked3 + count(block(row, :, val3) == val3)
             where (block(row, :, val3) == val3) block(row, :, val3) = 0
            block(row, col1, :) = values(:, 1)
             block(row, col2, :) = values(:, 2)
              block(row, col3, :) = values(:, 3)
             exit
         end do
       end do
   end do
end do
!
do col = 1, rank2
   if(count(part(:, col) == 0) == 3) cycle
   do row1 = 1, rank2 - 2
      if(part(row1, col) /= 0) cycle
       if(count(block(row1, col, :) /= 0) <= 1) cycle
       if(count(block(row1, col, :) /= 0) > 3 ) cycle
      do row2 = row1+1, rank2 - 1
         if(part(row2, col) /= 0) cycle
           if(count(block(row2, col, :) /= 0) <= 1) cycle
           if(count(block(row2, col, :) /= 0) > 3  ) cycle
           if(all(block(row1, col, :) == block(row2, col, :))) cycle
           do row3 = row2+1, rank2
            if(part(row3, col) /= 0) cycle
               if(count(block(row3, col, :) /= 0) <= 1) cycle
               if(all(block(row3, col, :) == block(row1, col, :))) cycle
               if(all(block(row3, col, :) == block(row2, col, :))) cycle
             if(count(block(row3, col, :) /= 0) > 3) cycle
             if(count(block(row1, col, :) + block(row2, col, :) +                             &
                        block(row3, col, :) /= 0) /=3) cycle
            values(:, 1) = block(row1, col, :)  
             values(:, 2) = block(row2, col, :)  
             values(:, 3) = block(row3, col, :)  
             val1 = maxloc(block(row1, col, :) + block(row2, col, :) + block(row3, col, :), dim=1)
               naked3 = naked3 + count(block(:, col, val1) == val1) 
             where (block(:, col, val1) == val1) block(:, col, val1) = 0  
             val2 = maxloc(block(row1, col, :) + block(row2, col, :) + block(row3, col, :), dim=1)
               naked3 = naked3 + count(block(:, col, val2) == val2) 
             where (block(:, col, val2) == val2) block(:, col, val2) = 0 
              val3 = maxloc(block(row1, col, :) + block(row2, col, :) + block(row3, col, :), dim=1)
               naked3 = naked3 + count(block(:, col, val3) == val3) - count(values /= 0)
             where (block(:, col, val3) == val3) block(:, col, val3) = 0 
            block(row1, col, :) = values(:, 1)
             block(row2, col, :) = values(:, 2)
             block(row3, col, :) = values(:, 3)
             exit
         end do
       end do
   end do
end do
!
do col1 = 1, rank2
   do row1 = 1, rank2
      if(part(row1, col1) /= 0) cycle
       if(count(block(row1, col1, :) /= 0) <= 1) cycle
       cornerr = (row1-1)/rank 
       cornerc = (col1-1)/rank
       if(count(part(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank) == 0) &
             == 3 ) cycle
      if(count(block(row1, col1, :) /= 0) > 3 ) cycle
      do col2 = 1, rank2
          if(cornerc /= (col2-1)/rank) cycle
         do row2 = 1, rank2
              if((row2-1)*rank2+col2 <= (row1-1)*rank2+col1 ) cycle
             if(part(row2, col2) /= 0) cycle
               if(count(block(row2, col2, :) /= 0) <= 1) cycle
               if(count(block(row2, col2, :) /= 0)  > 3) cycle
               if (cornerr /= (row2-1)/rank ) cycle
               if(all(block(row1, col1, :) == block(row2, col2, :))) cycle
box3:       do col3 = 1, rank2
               if(cornerc /= (col3-1)/rank ) cycle
               do row3 = 1, rank2
                  if((row3-1)*rank2+col3 <= (row2-1)*rank2+col2 ) cycle
                if(part(row3, col3) /= 0) cycle
                  if(count(block(row3, col3, :) /= 0) <= 1) cycle
                  if(all(block(row1, col1, :) == block(row3, col3, :))) cycle
                  if(all(block(row3, col3, :) == block(row2, col2, :))) cycle
                if (cornerr /= (row3-1)/rank ) cycle
                if(count(block(row3, col3, :) /= 0) > 3) cycle
                if(count(block(row1, col1, :) + block(row2, col2, :) + block(row3, col3, :) /= 0 &
                        ) /= 3) cycle
               values(:, 1) = block(row1, col1, :)  
                values(:, 2) = block(row2, col2, :)  
                values(:, 3) = block(row3, col3, :)  
                val1 = maxloc(block(row1, col1, :) + block(row2, col2, :) + block(row3, col3, :), &
                                dim = 1)   
                  naked3 = naked3 +                                                 &
      count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1) == val1) 
      where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val1)==val1)&
             block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank, val1) = 0
               val2 = maxloc(block(row1, col1, :) + block(row2, col2, :) + block(row3, col3, :), &
                                dim = 1) 
                  naked3 = naked3 +                                                 &
      count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2) == val2)    
      where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val2)==val2)&
             block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank, val2) = 0
                  val3 = maxloc(block(row1, col1, :) + block(row2, col2, :) + block(row3, col3, :), &
                                dim = 1)   
                  naked3 = naked3 - count(values /= 0) +                                                 &
      count(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val3) == val3)         
      where(block(cornerr*rank+1:cornerr*rank+rank, cornerc*rank+1:cornerc*rank+rank,val3)==val3)&
                   block(cornerr*rank+1:cornerr*rank+rank,cornerc*rank+1:cornerc*rank+rank, val3) = 0
               block(row1, col1, :) = values(:, 1)
                block(row2, col2, :) = values(:, 2)
                block(row3, col3, :) = values(:, 3) 
                exit box3
                  end do
               end do box3
          end do
       end do 
   end do
end do
end subroutine hidden_triplets

end subroutine new_solver

end module logic
  module brute_force
  ! (c) Michael Metcalf, 2006. 
  ! Runs at about 1.5msecs per easy puzzle on a 1GHz CPU, 40msecs for medium/hard ones,
  !          and 400msecs for very hard ones. 
    use logic
    implicit none
    private
     public brute, covered, soln, pearl
    integer, parameter :: r=9
     integer :: sudoku1(r, r), i, j, sudoku2(r, r), sudoku3(r, r), soln, block(r, r, r), &
                val, bc, br 
     logical :: pearl =.false., changed           
    contains

  subroutine brute(sudoku, key)
        implicit none

     integer, intent(inout) :: sudoku(r, r)
     integer  :: k, m   , knt , two, value, hold(r), knt_save, key, block_save               
      logical check(3), complete

      sudoku1 = sudoku
     call rearrange(sudoku1, 1)
 !          write(*,*)
!      write(*, '(9i3)') ((sudoku1(i, j), j=1,9), i=1,9)
      knt_save = count(sudoku1 /= 0)
      call new_solver(sudoku1, block, complete, key, changed)
      knt = count(sudoku1 /= 0)
      pearl = knt == knt_save      
!      if(changed) pearl = .false. 
 !    if(key==1.and..not.pearl)then;soln=-2;return;endif
     if(complete) then
        call rearrange(sudoku1, 2)
        sudoku = sudoku1
        soln = 1
        return
     end if   

      k = 1
      soln = -1                

!      write(*, '("No. of givens = ", i3)' ) knt
      forall(i=1:r, j=1:r, sudoku1(i, j) /= 0) block(i, j, sudoku1(i, j)) = sudoku1(i, j)
!
!   Checks after initial
!   elimination that each row/column/box has at least 1 candidate for
!   each missing value (otherwise zero solutions), and that each empty cell has at least
!   one candidate.
vals: do val = 1, r 
        do j = 1, r
            if(count(sudoku1(j, :) == val)  ==  0 .and. count(block(j, :, val) == val) == 0) exit vals     
            if(count(sudoku1(:, j) == val)  ==  0 .and. count(block(:, j, val) == val) == 0) exit vals
             br = j
             bc = mod(j-1, 3)*3 +1 
            if(count(sudoku1(((br-1)/3)*3+1:((br-1)/3)*3+3,                                    &
                               ((bc-1)/3)*3+1:((bc-1)/3)*3+3) ==  val) == 0    .and.             &
                  count(block(((br-1)/3)*3+1:((br-1)/3)*3+3,                                    &
                               ((bc-1)/3)*3+1:((bc-1)/3)*3+3, val) ==  val) == 0) exit vals
           if(sudoku1(val, j) == 0) then   ! (val is a proxy for i)
                if(all(block(val, j, :) == 0)) exit vals
             end if 
             if(count(block(val, j, :) /= 0) /= 2) cycle 
             check = .false.
             br = val
             bc = j
             do two = 1, 2    ! check for clash: two single values share same cell
                if (two == 1) then
                   hold = block(val, j, :)
                   where (hold == 0) hold = r + 1
                   value = minval(hold, dim=1)
                   if(count(block(val, :, value) == value) == 1) check(1) = .true.  
                  if(count(block(:, j, value) == value) == 1) check(2) = .true.
                  if(count(block(((br-1)/3)*3+1:((br-1)/3)*3+3,                              &      
                      ((bc-1)/3)*3+1:((bc-1)/3)*3+3, value) ==  value) == 1) check(3) = .true.
                    if (all(check .eqv. .false.)) exit        
                else            
                   value = maxval(block(val, j, :), dim=1)  
                   if(check(1) .and. count(block(val, :, value) == value) == 1) exit vals     
                  if(check(2) .and. count(block(:, j, value) == value) == 1) exit vals
                  if(check(3) .and. count(block(((br-1)/3)*3+1:((br-1)/3)*3+3,               &
                                ((bc-1)/3)*3+1:((bc-1)/3)*3+3, value) ==  value) == 1) exit vals 
                 end if                
             end do      
          end do       
     end do vals
      if(val == r+1) soln = 0
      if(soln == -1) return
 
      soln = 0
!      write(*,*)
!      write(*, '(9i3)') ((sudoku1(i, j), j=1,9), i=1,9)
     call digits_2(k)
 !    write(*,*)soln
  !   write(*, '(9i3)') ((sudoku3(i, j), j=1,9), i=1,9)
   !  write(*,*)
    ! write(*, '(9i3)') ((sudoku3(i, j), j=1,9), i=1,9);stop
     call rearrange(sudoku3, 2)
      sudoku = sudoku3

  end subroutine brute
  
   subroutine rearrange(sudoku, key)
      integer, intent(inout) :: sudoku(9, 9)
      integer, intent(in)    :: key
      integer                :: row_sum(9), row, row_temp(9), chute_sum(3), chute_temp(3, 9), chute, pass
      integer, save          :: cmin(2), cmax(2), smin(3, 2), smax(3, 2), passes  
!      
! Rearrange rows to have fuller ones higher                   
      select case(key)
      case (1)
      passes = 2
      if(max(count(sudoku(1:3, :) /= 0), count(sudoku(4:6, :) /= 0), count(sudoku(7:9, :) /= 0)) >          &
         max(count(sudoku(:, 1:3) /= 0), count(sudoku(:, 4:6) /= 0), count(sudoku(:, 7:9) /= 0))) passes = 1
      do pass = 1, passes 
         if(pass == 2) sudoku = transpose(sudoku)    
         row_sum = count(sudoku/=0, dim = 2)
         do row = 1, 7, 3
            chute = row/3 + 1
            smin(chute, pass) = minloc(row_sum(row:row+2), dim=1) + row - 1
            smax(chute, pass) = 4 - maxloc(row_sum(row+2:row:-1), dim=1) + row - 1 
            if(smin(chute, pass) < smax(chute, pass)) then
               row_temp = sudoku(smin(chute, pass), :)
               sudoku(smin(chute, pass), :) = sudoku(smax(chute, pass), :)
               sudoku(smax(chute, pass), :) = row_temp
            end if   
         end do
         chute_sum(1) = sum(row_sum(1:3)); chute_sum(2) = sum(row_sum(4:6))  
         chute_sum(3) = sum(row_sum(7:9))
         cmin(pass) = minloc(chute_sum, dim = 1)
         cmax(pass) = 4 - maxloc(chute_sum(3:1:-1), dim = 1)
         if(cmin(pass) < cmax(pass)) then
            chute_temp = sudoku(3*(cmin(pass)-1)+1: 3*(cmin(pass)-1)+3, :)
            sudoku(3*(cmin(pass)-1)+1: 3*(cmin(pass)-1)+3, :) = sudoku(3*(cmax(pass)-1)+1: 3*(cmax(pass)-1)+3, :)
            sudoku(3*(cmax(pass)-1)+1: 3*(cmax(pass)-1)+3, :) = chute_temp
         end if 
      end do
      
      case (2)
      do pass = passes, 1, -1
         if(cmin(pass) < cmax(pass)) then
            chute_temp = sudoku(3*(cmin(pass)-1)+1: 3*(cmin(pass)-1)+3, :)
            sudoku(3*(cmin(pass)-1)+1: 3*(cmin(pass)-1)+3, :) = sudoku(3*(cmax(pass)-1)+1: 3*(cmax(pass)-1)+3, :)
            sudoku(3*(cmax(pass)-1)+1: 3*(cmax(pass)-1)+3, :) = chute_temp
         end if   
         do row = 1, 7, 3
            chute = row/3 + 1
            if(smin(chute, pass) < smax(chute, pass)) then
               row_temp = sudoku(smin(chute, pass), :)
               sudoku(smin(chute, pass), :) = sudoku(smax(chute, pass), :)
               sudoku(smax(chute, pass), :) = row_temp
            end if   
         end do
         if(pass == 2) sudoku = transpose(sudoku)
      end do   
      end select

   end subroutine rearrange   
  
  recursive subroutine digits_2(row) 
  integer, intent(in) :: row
  integer :: i1, i2, i3, i4, i5, i6, i7, i8, i9, l(r), u(r), rnext, col
  logical :: OK

     where(sudoku1(row, :) /= 0)
        l = sudoku1(row, :)
         u = l
     elsewhere
          l = 1
        u = r
     end where

     rnext = ((row-1)/3+1)*3+1

  do i1 = l(1), u(1)
     if(block(row, 1, i1) <= 0) cycle
     block(row, 2:9, i1) =  block(row, 2:9, i1)  - 10
     block(rnext:9, 1, i1) = block(rnext:9, 1, i1) - 10
     select case(mod(row, 3))
     case(1)
         block(row+1:row+2, 1:3, i1) = block(row+1:row+2, 1:3, i1) - 10
      case(2)
         block(row+1, 1:3, i1) = block(row+1, 1:3, i1) - 10
     end select 
     sudoku2(row, 1) = i1
      do i2 = l(2), u(2)
         if(block(row, 2, i2) <= 0) cycle
        block(row, 3:9, i2) = block(row, 3:9, i2) - 10
        block(rnext:9, 2, i2) = block(rnext:9, 2, i2) - 10
        select case(mod(row, 3))
        case(1)
            block(row+1:row+2, 1:3, i2) = block(row+1:row+2, 1:3, i2) - 10
         case(2)
            block(row+1, 1:3, i2) = block(row+1, 1:3, i2) - 10
        end select 
          sudoku2(row, 2) = i2
          do i3 = l(3), u(3)
             if(block(row, 3, i3) <= 0) cycle
           block(row, 4:9, i3) = block(row, 4:9, i3) - 10
           block(rnext:9, 3, i3) = block(rnext:9, 3, i3) - 10
           select case(mod(row, 3))
           case(1)
               block(row+1:row+2, 1:3, i3) = block(row+1:row+2, 1:3, i3) - 10
            case(2)
               block(row+1, 1:3, i3) =  block(row+1, 1:3, i3) - 10
           end select 
           sudoku2(row, 3) = i3
           do i4 = l(4), u(4)
                if(block(row, 4, i4) <= 0) cycle
              block(row, 5:9, i4) =  block(row, 5:9, i4) - 10
              block(rnext:9, 4, i4) = block(rnext:9, 4, i4) - 10
              select case(mod(row, 3))
              case(1)
                  block(row+1:row+2, 4:6, i4) = block(row+1:row+2, 4:6, i4) - 10
               case(2)
                  block(row+1, 4:6, i4) =  block(row+1, 4:6, i4) - 10
              end select 
                sudoku2(row, 4) = i4
                do i5 = l(5), u(5)
                    if(block(row, 5, i5) <= 0) cycle
                 block(row, 6:9, i5) =  block(row, 6:9, i5) - 10
                 block(rnext:9, 5, i5) = block(rnext:9, 5, i5) - 10
                 select case(mod(row, 3))
                 case(1)
                     block(row+1:row+2, 4:6, i5) = block(row+1:row+2, 4:6, i5) - 10
                  case(2)
                     block(row+1, 4:6, i5) = block(row+1, 4:6, i5) - 10
                 end select 
                   sudoku2(row, 5) = i5
                     do i6 = l(6), u(6)
                        if(block(row, 6, i6) <= 0) cycle
                    block(row, 7:9, i6) = block(row, 7:9, i6) - 10
                    block(rnext:9, 6, i6) = block(rnext:9, 6, i6) - 10
                    select case(mod(row, 3))
                    case(1)
                        block(row+1:row+2, 4:6, i6) = block(row+1:row+2, 4:6, i6) - 10
                     case(2)
                        block(row+1, 4:6, i6) = block(row+1, 4:6, i6) - 10
                    end select 
                      sudoku2(row, 6) = i6
                         do i7 = l(7), u(7)
                            if(block(row, 7, i7) <= 0) cycle
                       block(row, 8:9, i7) = block(row, 8:9, i7) - 10
                       block(rnext:9, 7, i7) = block(rnext:9, 7, i7) - 10
                       select case(mod(row, 3))
                       case(1)
                           block(row+1:row+2, 7:9, i7) = block(row+1:row+2, 7:9, i7) - 10
                        case(2)
                           block(row+1, 7:9, i7) = block(row+1, 7:9, i7) - 10
                       end select 
                         sudoku2(row, 7) = i7
                            do i8 = l(8), u(8)
                               if(block(row, 8, i8) <= 0) cycle
                          block(row, 9, i8) = block(row, 9, i8) - 10
                          block(rnext:9, 8, i8) = block(rnext:9, 8, i8) - 10
                          select case(mod(row, 3))
                          case(1)
                              block(row+1:row+2, 7:9, i8) = block(row+1:row+2, 7:9, i8) - 10
                           case(2)
                              block(row+1, 7:9, i8) = block(row+1, 7:9, i8) - 10
                          end select  
                            sudoku2(row, 8) = i8
                               do i9 = 45-(i1+i2+i3+i4+i5+i6+i7+i8), 45-(i1+i2+i3+i4+i5+i6+i7+i8)
                                if(block(row, 9, i9) <= 0) cycle
                                block(rnext:9, 9, i9) = block(rnext:9, 9, i9) - 10
                          select case(mod(row, 3))
                          case(1)
                              block(row+1:row+2, 7:9, i9) = block(row+1:row+2, 7:9, i9) - 10
                           case(2)
                              block(row+1, 7:9, i9) = block(row+1, 7:9, i9) - 10
                          end select  
                            sudoku2(row, 9) = i9   
                            OK = .true.
                            if(row == 5) then    ! testing also for 6 and 7 slighly slows code
                               do col = 1, 9
                                  if(sudoku1(row+1, col) /= 0) cycle
                                  if(any(block(row+1, col, :) > 0 )) cycle  ! DEEPEST STATEMENT
                                  OK = .false.
                                  exit
                               end do  
                  !            if(any(sum(block(row+1, :, :), dim=2, mask=block(row+1, :, :)>=0) + &
                  !               sudoku1(row+1, :) == 0 )) OK =.false. ! An alternative to the do construct          
                            end if                     
                                if(row == 8 ) then   
                                   sudoku2(9, :) = 45 - sum(sudoku2(1:8, :), dim=1)
                                   if(sum(sudoku2(9, :)) /= 45) cycle
                                    soln = soln + 1
                             sudoku3 = sudoku2     
                             if(.not.covered(sudoku3, sudoku1)) soln = 2                              
                          elseif(OK)then
                                    call digits_2(row + 1)     
                                    if(soln >= 2)return
                                end if
                                block(rnext:9, 9, i9) = block(rnext:9, 9, i9) + 10
                                select case(mod(row, 3))
                          case(1)
                              block(row+1:row+2, 7:9, i9) = block(row+1:row+2, 7:9, i9) + 10
                           case(2)
                              block(row+1, 7:9, i9) = block(row+1, 7:9, i9) + 10
                          end select  
                          end do
                                block(row, 9, i8) = block(row, 9, i8) + 10
                          block(rnext:9, 8, i8) = block(rnext:9, 8, i8) + 10
                          select case(mod(row, 3))
                          case(1)
                              block(row+1:row+2, 7:9, i8) = block(row+1:row+2, 7:9, i8) + 10
                           case(2)
                              block(row+1, 7:9, i8) = block(row+1, 7:9, i8) + 10
                          end select  
                       end do
                       block(row, 8:9, i7) = block(row, 8:9, i7) + 10
                       block(rnext:9, 7, i7) = block(rnext:9, 7, i7) + 10
                       select case(mod(row, 3))
                       case(1)
                           block(row+1:row+2, 7:9, i7) = block(row+1:row+2, 7:9, i7) + 10
                        case(2)
                           block(row+1, 7:9, i7) = block(row+1, 7:9, i7) + 10
                       end select 
                    end do
                    block(row, 7:9, i6) = block(row, 7:9, i6)  + 10
                    block(rnext:9, 6, i6) = block(rnext:9, 6, i6) + 10
                    select case(mod(row, 3))
                    case(1)
                        block(row+1:row+2, 4:6, i6) = block(row+1:row+2, 4:6, i6) + 10
                     case(2)
                        block(row+1, 4:6, i6) = block(row+1, 4:6, i6) + 10
                    end select 
                 end do
                 block(row, 6:9, i5) = block(row, 6:9, i5) + 10
                 block(rnext:9, 5, i5) = block(rnext:9, 5, i5) + 10
                 select case(mod(row, 3))
                 case(1)
                     block(row+1:row+2, 4:6, i5) = block(row+1:row+2, 4:6, i5) + 10
                  case(2)
                     block(row+1, 4:6, i5) = block(row+1, 4:6, i5) + 10
                 end select 
              end do
              block(row, 5:9, i4) =  block(row, 5:9, i4) + 10
              block(rnext:9, 4, i4) = block(rnext:9, 4, i4) + 10
              select case(mod(row, 3))
              case(1)
                  block(row+1:row+2, 4:6, i4) = block(row+1:row+2, 4:6, i4) + 10
               case(2)
                  block(row+1, 4:6, i4) = block(row+1, 4:6, i4) + 10
              end select 
           end do
           block(row, 4:9, i3) = block(row, 4:9, i3) + 10
           block(rnext:9, 3, i3) = block(rnext:9, 3, i3) + 10
           select case(mod(row, 3))
           case(1)
               block(row+1:row+2, 1:3, i3) = block(row+1:row+2, 1:3, i3) + 10
            case(2)
               block(row+1, 1:3, i3) = block(row+1, 1:3, i3) + 10
           end select 
        end do
        block(row, 3:9, i2) = block(row, 3:9, i2) + 10
        block(rnext:9, 2, i2) = block(rnext:9, 2, i2) + 10
        select case(mod(row, 3))
        case(1)
            block(row+1:row+2, 1:3, i2) = block(row+1:row+2, 1:3, i2) + 10
         case(2)
            block(row+1, 1:3, i2) = block(row+1, 1:3, i2) + 10
        end select 
     end do
     block(row, 2:9, i1) = block(row, 2:9, i1) + 10
     block(rnext:9, 1, i1) = block(rnext:9, 1, i1) + 10
     select case(mod(row, 3))
     case(1)
         block(row+1:row+2, 1:3, i1) = block(row+1:row+2, 1:3, i1) + 10
      case(2)
         block(row+1, 1:3, i1) = block(row+1, 1:3, i1) + 10
     end select 
  end do
  end subroutine digits_2
  
  logical function covered(sudoku, pattern)
  integer, intent(in) :: sudoku(:, :), pattern(:, :)
  integer :: j, k, c1, ca, cb, cc, ra, rb, rc, ss(9, 9), rows, pp(9, 9), patt, c2, c3   , ii, jj
  
   ss = sudoku
   pp= pattern 
   covered = .true. 
      
 all: do k = 1, 2     ! rows/columns
         do j = 1, 3    ! chutes 
!
!    Check cover of unavoidable sets
         c1 = 4
         do ca = 1, 6    
            if(ca == 4) c1 = 7
            do cb = c1, 9
               ra = (j - 1) * 3 + 1
               rb = ra + 1
               do rows = 1, 3
                  select case(rows)
                  case(2)
                      rb = rb + 1
                  case(3)
                      ra = ra + 1
                  end select    
                  if(ss(ra, ca) /= ss(rb, cb)) cycle
                  if(ss(rb, ca) /= ss(ra, cb)) cycle
!     Have unavoidable 4-set
                  if(pp(ra, ca) /= 0) cycle
                  if(pp(rb, cb) /= 0) cycle
                  if(pp(rb, ca) /= 0) cycle
                  if(pp(ra, cb) /= 0) cycle
!     Have no given clue in the set
                  covered = .false.
                  exit all
               end do
!
!    Check cover of unavoidable 6-sets (vertical)   
               ra = (j - 1) * 3 + 1
               if(ss(ra, ca)+ss(ra+1, ca)+ss(ra+2, ca) ==                               &
                  ss(ra, cb)+ss(ra+1, cb)+ss(ra+2, cb)) then
                  if((ss(ra, ca) /= ss(ra+2, cb) .or. ss(ra+1, ca) /= ss(ra, cb) .or.   &  
                      ss(ra+2, ca) /= ss(ra+1, cb)) .and.                               &
                     (ss(ra, ca) /= ss(ra+1, cb) .or. ss(ra+1, ca) /= ss(ra+2, cb) .or. &  
                      ss(ra+2, ca) /= ss(ra, cb))) cycle  
!     Have unavoidable set
                  if(pp(ra,   ca) /= 0) cycle
                  if(pp(ra+1, ca) /= 0) cycle
                  if(pp(ra+2, ca) /= 0) cycle
                  if(pp(ra,   cb) /= 0) cycle  
                  if(pp(ra+1, cb) /= 0) cycle
                  if(pp(ra+2, cb) /= 0) cycle  
!     Have no given clue in the set
                  covered = .false.
                  !write(*, '(9i3)') ((sudoku(ii, jj), jj=1,9), ii=1,9);stop
                  exit all     
               end if                                       
            end do
         end do   
!
!    Check cover of unavoidable 6-sets (horizontal)          
         do ra = (j - 1) * 3 + 1, (j - 1) * 3 + 3
            rb = ra + 1
            if(mod(ra, 3) == 0) rb = ra - 2
            do ca = 1, 3
               do cb = 4, 6
                  do cc = 7, 9
                     if(ss(ra, ca)+ss(ra, cb)+ss(ra, cc) ==                             &
                         ss(rb, ca)+ss(rb, cb)+ss(rb, cc)) then
                        if((ss(ra, ca) /= ss(rb, cb) .or. ss(ra, cb) /= ss(rb, cc) .or. &  
                            ss(ra, cc) /= ss(rb, ca)) .and.                             &
                           (ss(ra, ca) /= ss(rb, cc) .or. ss(ra, cb) /= ss(rb, ca) .or. &  
                            ss(ra, cc) /= ss(rb, cb))) cycle  
!     Have unavoidable set
                        if(pp(ra, ca) /= 0) cycle
                        if(pp(ra, cb) /= 0) cycle
                        if(pp(ra, cc) /= 0) cycle
                        if(pp(rb, ca) /= 0) cycle  
                        if(pp(rb, cb) /= 0) cycle
                        if(pp(rb, cc) /= 0) cycle  
!     Have no given clue in the set
                        covered = .false.
                 ! write(*, '(9i3)') ((sudoku(ii, jj), jj=1,9), ii=1,9)
                 ! write(*,*)chute1,chute2,j,k,ra,rb,ca,cb,cc;stop
                        exit all     
                     end if  
!
!   Another 6-set combination
                     rc = ra - 1
                     if(mod(rc, 3) == 0) rc = rc + 3 
                     c2 = cb
                     c3 = cc
                     do patt = 1, 2
                        if(patt == 2) then
                           c2 = cc
                           c3 = cb
                        end if                              
                        if(ss(ra, ca) /= ss(rc, c2) .or. ss(ra, ca) /= ss(rb, c3) ) cycle
                        if(ss(rb, ca) /= ss(ra, c2) .or. ss(rb, ca) /= ss(rc, c3) ) cycle
!     Have unavoidable set
                        if(pp(ra, ca) /= 0) cycle
                        if(pp(ra, c2) /= 0) cycle
                        if(pp(rb, ca) /= 0) cycle
                        if(pp(rb, c3) /= 0) cycle  
                        if(pp(rc, c2) /= 0) cycle
                        if(pp(rc, c3) /= 0) cycle  
!     Have no given clue in the set
                        covered = .false.
                        exit all  
                     end do                       
                  end do
               end do
            end do 
         end do        
      end do

      ss = transpose(ss)
      pp = transpose(pp)
   end do all

   if(covered) covered = reflected(ss, pp)
   
  end function covered
  
  logical function reflected(ss, pp)
  integer, intent(in)    :: ss(:, :)
  integer, intent(inout) :: pp(:, :)
  integer :: i, j, ca, cb, cc, ra, rb, rc  
!
! check cover of reflected pair (6-set)
   reflected = .true.   
all:  do i = 1, 3
      do j = 1, 3    ! all boxes      
         do ra = (i - 1) * 3 + 1, (i - 1) * 3 + 3
            rb = ra + 1
            if(mod(ra, 3) == 0) rb = ra - 2
            do ca = (j - 1) * 3 + 1, (j - 1) * 3 + 3
               do cb = (j - 1) * 3 + 1, (j - 1) * 3 + 3
                  if(ca == cb) cycle
                  do cc = 1, 9
                     if(cc >= (j - 1) * 3 + 1 .and. cc <= (j - 1) * 3 + 3) cycle 
                     if(ss(rb, cb) /= ss(ra, cc)) cycle
                     if(ss(ra, ca) /= ss(rb, cc)) cycle 
                     do rc = 1, 9
                        if(rc >= (i - 1) * 3 + 1 .and. rc <= (i - 1) * 3 + 3) cycle                        
                        if(ss(ra, ca) /= ss(rc, cb) .or. ss(rb, cb) /= ss(rc, ca) ) cycle
!     Have unavoidable set
                        if(pp(ra, ca) /= 0) cycle
                        if(pp(ra, cc) /= 0) cycle
                        if(pp(rb, cb) /= 0) cycle
                        if(pp(rb, cc) /= 0) cycle  
                        if(pp(rc, ca) /= 0) cycle
                        if(pp(rc, cb) /= 0) cycle  
!     Have no given clue in the set
                        reflected = .false.
                        exit all
                     end do                        
                  end do
               end do
            end do   
         end do   
      end do
   end do all          
 
  end function reflected

  end module brute_force

  program test_work
  use brute_force
     implicit none
      integer :: sudoku1(9,9), i, j, l, m, ss(9,9) , val ,k, knt, original(9, 9), rn(9, 4), &
                 ii, jj, kk, so(9, 9), sp(9, 9), rv(9, 9, 9), last(4), sfull(9, 9)
     integer :: i2, ii2, j2, jj2, kk2, val2, stemp, limit = 1, se = 0, mode, nargs
      real t1, t2
      integer :: number
      logical :: random = .true., new, change, done(81, 81), same1, same2, grind = .false., &
                 reject, pearl_save
      character(5) :: pearl_ch, carg           


#ifdef SPEC
     nargs = command_argument_count()
     if (nargs.ne.1) then
        write(*,*) 'Useage: exchange2 Number_of_puzzles'
        stop
     endif
     call get_command_argument(1,carg)
     read(carg,'(I2)') number
#else
      write(*, advance = 'no', fmt='(" Number of puzzles (0 - 54)? ")')
      read(*, *) number
#endif   
     grind = .true.
     mode = 2   ! 1 = shallow; 2 = no reuse strict; 3 = no reuse; >3 = no return 
     if(number < 0) mode = 1
      limit = max(number, 1)
#ifndef SPEC
      call cpu_time(t1)           
#endif         
     if(grind) open(3, file='s.txt')
      
fine: do k = 1, limit
     write(*, '(/"Puzzle ",i0)') k
      call read_raw_data(sudoku1, k)  
      write(*, '(9i3)') ((sudoku1(i, j), j=1,9), i=1,9)  
  original = sudoku1
  sp = original
  new = .true.
  last = 0
  do
     change = new .or. grind
     if(new) then
        do i = 1, 4
           if(random) then
              rn(:, i) = one_nine(i, i)
           else
               rn(:, i) = (/ (j, j = 1, 9) /)
           end if
        end do 
          do i = 1, 9
             do j = 1, 9
                if(random) then
                   if(sudoku1(i, j) /= 0) rv(:, i, j) = one_nine(i, j)
              else
                   rv(:, i, j) = (/ (j, j = 1, 9) /)
              end if
             end do
          end do
          if(.not.grind) then
             ss= sudoku1
             call brute(sudoku1, 1)
             sfull = sudoku1
             sudoku1 = ss
             call eliminate
          end if   
          new = .false.
      end if      

      ss = sudoku1
      so = sudoku1
      done = .false.
      knt = count(ss /= 0)
fin: do ii = 1, 9
         i = rn(ii, 1) 
         do jj = 1, 9  
             j = rn(jj, 2)  
            if(ss(i,j) == 0) cycle
             same1 = count(sudoku1==sudoku1(i, j)) == 1
h:             do kk = 1, 9
                val = abs(rv(kk, i, j)) 
                 if(mode <= 2 .and. val == 0) cycle 

      do ii2 = 1, 9
         i2 = rn(ii2, 3)
         do jj2 = 1, 9
             j2 = rn(jj2, 4)  
             if (all(last == (/i, j, i2, j2 /))) then
                write (*, "(' last')")
                exit fin
             end if   
            if(ss(i2,j2) == 0) cycle
             if(i == i2 .and. j == j2) cycle
             if(done(min((i-1)*9+j, (i2-1)*9+j2), max((i-1)*9+j, (i2-1)*9+j2))) cycle
             if(same1 .and. count(sudoku1==sudoku1(i2, j2))==1) cycle
             same2 = sudoku1(i, j) == sudoku1(i2, j2) .and. count(sudoku1==sudoku1(i, j)) == 2

             do kk2 = 1, 9
                reject = .false.
                val2 = abs(rv(kk2, i2, j2))
                select case (mode)
                case (3) 
                   if(rv(kk, i, j) == -val .and. rv(kk2, i2, j2) == -val2) cycle
                case (1:2)   
                    if(val2 == 0) cycle
                 end select   
                if(sp(i, j) == val .and. sp(i2, j2) == val2) cycle
                 if(same2 .and. val == val2 .and. count(sudoku1==val)==0) cycle
                 stemp = sudoku1(i2,j2)   ! check val not a repeat (if val2 accepted)
                 sudoku1(i2,j2) = val2
                    if (any(sudoku1(i, :) == val) ) then
                 sudoku1(i2,j2) = stemp
                    cycle
              end if
                if (any(sudoku1(:, j) == val) ) then
                 sudoku1(i2,j2) = stemp
                    cycle
              end if 
                if (any(sudoku1(((i-1)/3)*3 + 1:((i-1)/3)*3 + 3,                   &
                                ((j-1)/3)*3 + 1:((j-1)/3)*3 + 3) == val) ) then
                 sudoku1(i2,j2) = stemp
                     cycle
              end if
              sudoku1(i2,j2) = stemp
                 stemp = sudoku1(i,j)        ! check val2 not a repeat (if val accepted)
                 sudoku1(i,j) = val
                    if (any(sudoku1(i2, :) == val2) ) then
                 sudoku1(i,j) = stemp
                    cycle
              end if
                if (any(sudoku1(:, j2) == val2) ) then
                 sudoku1(i,j) = stemp
                    cycle
              end if 
                if (any(sudoku1(((i2-1)/3)*3 + 1:((i2-1)/3)*3 + 3,                   &
                                ((j2-1)/3)*3 + 1:((j2-1)/3)*3 + 3) == val2) ) then
                 sudoku1(i,j) = stemp
                     cycle
              end if
              sudoku1(i2,j2) = val2 

                 if(.not.knt_val(sudoku1)) then
                 call brute(sudoku1, 1)
                   if(soln==1) then
                      sfull = sudoku1
                       ss(i, j) = val    ; ss(i2, j2) = val2
                       sudoku1 = ss
                       write(*,'(/," At", 2(2i2," change to", i2,:,", "))') i, j, val, i2, j2, val2
                         change = .true.
                      done(min((i-1)*9+j, (i2-1)*9+j2), max((i-1)*9+j, (i2-1)*9+j2)) =.true.
                      select case (mode)
                      case(1:2)
                            rv(kk, i, j) = 0  ; rv(kk2, i2, j2) = 0
                         case(3)   
                            rv(kk, i, j)    = sign(rv(kk, i, j), -1)
                            rv(kk2, i2, j2) = sign(rv(kk2, i2, j2), -1)
                         end select   
                         last = (/ i, j, i2, j2 /)
                         pearl_save = pearl                        ! ;if(.not.pearl) exit h
                         call eliminate
                         pearl = pearl_save
                         if (grind .and. .not. reject) then
                            se = se + 1
                            pearl_ch = ' '
                          if(pearl) pearl_ch = 'Pearl'
                            write(3, '(81i1,1x,i5, a2, 1x, 4i1)') ((sudoku1(l, m), m=1,9), l=1,9), se,  &
                                                       pearl_ch(1:1), last
                       if(mode == 1) cycle fine                                   
                    end if   
                        exit  h
                 end if
              end if
                sudoku1 = ss
           end do
         end do 
      end do 

           end do h
         end do 
      end do fin
      
     if(all(so == sudoku1)) exit
      knt = count(ss /= 0)
      write(*, '(9i3)') ((sudoku1(i, j), j=1,9), i=1,9);   if(number == 0) exit
  end do

#ifndef SPEC
call cpu_time(t2)
#endif
write(*,'()')
write(*, '(9i3)') ((sudoku1(i, j), j=1,9), i=1,9)
write(*, '(/," Puzzle, count, changes: ", 3i3)') k, knt, count(original /= sudoku1)
#ifndef SPEC
write(*, '(a, f10.2)') ' Elapsed time: ', t2-t1
#endif
end do fine

#ifndef SPEC
if(mode == 1) then
   call cpu_time(t2)
   write(*,'()')
   write(*, '(a, f10.2)') ' Elapsed time: ', t2-t1
end if
#endif

stop

contains

  subroutine eliminate
  integer :: i, j, ii, jj 

        ss = sudoku1
      do ii = 1, 9 
         i = rn(ii, 2)  
         do jj = 1, 9
             j = rn(jj, 3)                       
            if(ss(i,j) == 0) cycle
             sudoku1(i,j) = 0 
             if(.not.knt_val(sudoku1) .and. covered(sfull, sudoku1)) then
              call brute(sudoku1, 2)
                if(soln == 1) then
                   if (grind) then
                      reject = .true.
                      sudoku1 = ss 
                      return
                   end if   
                    ss(i, j) = 0        
                   write(*,'(" Delete value in cell ",2i2,/)')  i, j
                    sp = ss
                     new = .true.  
              end if
           end if
             sudoku1 = ss
         end do 
      end do
  end subroutine eliminate

  function knt_val(sudoku1)
     logical :: knt_val
      integer :: sudoku1(9, 9), val, knt
        knt = 0
      do val = 1, 9
          if(count(sudoku1 == val) /= 0) knt = knt + 1
      end do
      knt_val = knt < 8
!      if(knt_val) write(*, '(" Insufficient distinct values: ", i1)') knt
  end function knt_val

  function one_nine(dummy, dummy1)  ! Highly deterministic 'random' numbers
     integer :: one_nine(9)
      integer, intent(in) :: dummy, dummy1
      real :: numbers(9)=(/  5,  6,  3,  8,  9,  1,  7,  4,  2 /)
     one_nine = INT(numbers)
     numbers = 10 - cshift(numbers, 1)
  end function one_nine
  
  subroutine read_raw_data(s, n)
  integer, intent(out), dimension(9, 9) :: s
  integer, intent(in)                   :: n
  character(len=81), dimension(27),save :: raw_data
  integer :: i
  logical :: opened = .false.
!
!   Open file and read file on first call.  
  if(.not.opened) then
     open (7, file = 'puzzles.txt') 
     opened = .true.
     do i = 1, 27
        read(7, '(a81)') raw_data(i)
     end do
     close (7)
  end if    
!  
!  There are 27 stored puzzles. Their number can be doubled by transposing them.
   select case(n)
      case(1:27)
         read(raw_data(n), '(81i1)') s 
         s = transpose(s)
      case(28:54)
         read(raw_data(n-27), '(81i1)') s
      case default
         write(*, *) ' Puzzle number out of range 1 - 54. Stop.'
         stop
      end select  
 
   end subroutine read_raw_data

  end program
