	.text
	.file	"readmin.c"
	.section	.rodata.cst16,"aM",@progbits,16
	.p2align	4                               // -- Begin function read_min
.LCPI0_0:
	.xword	4000                            // 0xfa0
	.xword	0                               // 0x0
	.text
	.globl	read_min
	.p2align	2
	.type	read_min,@function
read_min:                               // @read_min
// %bb.0:
	sub	sp, sp, #368                    // =368
	stp	x29, x30, [sp, #272]            // 16-byte Folded Spill
	stp	x28, x27, [sp, #288]            // 16-byte Folded Spill
	stp	x26, x25, [sp, #304]            // 16-byte Folded Spill
	stp	x24, x23, [sp, #320]            // 16-byte Folded Spill
	stp	x22, x21, [sp, #336]            // 16-byte Folded Spill
	stp	x20, x19, [sp, #352]            // 16-byte Folded Spill
	adrp	x8, :got:__stack_chk_guard
	ldr	x8, [x8, :got_lo12:__stack_chk_guard]
	adrp	x1, .L.str
	add	x29, sp, #272                   // =272
	add	x1, x1, :lo12:.L.str
	ldr	x8, [x8]
	mov	x19, x0
	stur	x8, [x29, #-16]
	bl	fopen
	cbz	x0, .LBB0_24
// %bb.1:
	mov	x28, x0
	add	x0, sp, #52                     // =52
	mov	w1, #200
	mov	x2, x28
	bl	fgets
	adrp	x1, .L.str.1
	add	x1, x1, :lo12:.L.str.1
	add	x0, sp, #52                     // =52
	add	x2, sp, #40                     // =40
	add	x3, sp, #32                     // =32
	bl	__isoc99_sscanf
	cmp	w0, #2                          // =2
	b.ne	.LBB0_24
// %bb.2:
	ldp	x10, x26, [sp, #32]
	mov	x9, #63439
	movk	x9, #58195, lsl #16
	movk	x9, #39845, lsl #32
	add	x11, x26, x26, lsl #1
	movk	x9, #8388, lsl #48
	add	x27, x10, x11
	stp	x27, x10, [x19, #424]
	sub	x10, x27, #1                    // =1
	smulh	x11, x27, x9
	smulh	x9, x10, x9
	asr	x10, x11, #9
	mov	w8, #4000
	add	x11, x10, x11, lsr #63
	str	x8, [x19, #640]
	asr	x12, x9, #9
	msub	x8, x11, x8, x27
	add	x10, x12, x9, lsr #63
	sub	x11, x8, #4000                  // =4000
	cmp	x8, #0                          // =0
	mov	w22, #1
	add	x9, x10, #1                     // =1
	csel	x11, xzr, x11, eq
	bfi	x22, x26, #1, #63
	adds	x8, x9, x11
	stp	x22, x26, [x19, #400]
	str	x9, [x19, #624]
	str	x8, [x19, #632]
	b.pl	.LBB0_10
// %bb.3:
	add	x10, x11, x10
	mov	x11, #-2
	sub	x10, x11, x10
	udiv	x10, x10, x9
	add	x10, x10, #1                    // =1
	cmp	x10, #4                         // =4
	b.hs	.LBB0_5
// %bb.4:
	mov	w10, #4000
	b	.LBB0_8
.LBB0_5:
	adrp	x13, .LCPI0_0
	ldr	q0, [x13, :lo12:.LCPI0_0]
	and	x11, x10, #0xfffffffffffffffc
	mov	x12, xzr
	madd	x8, x11, x9, x8
	movi	v1.2d, #0000000000000000
	movi	v2.2d, #0xffffffffffffffff
.LBB0_6:                                // =>This Inner Loop Header: Depth=1
	add	x12, x12, #4                    // =4
	add	v0.2d, v0.2d, v2.2d
	cmp	x12, x11
	add	v1.2d, v1.2d, v2.2d
	b.ne	.LBB0_6
// %bb.7:
	add	v0.2d, v1.2d, v0.2d
	addp	d0, v0.2d
	cmp	x10, x11
	fmov	x10, d0
	b.eq	.LBB0_9
.LBB0_8:                                // =>This Inner Loop Header: Depth=1
	add	x8, x8, x9
	sub	x10, x10, #1                    // =1
	tbnz	x8, #63, .LBB0_8
.LBB0_9:
	str	x8, [x19, #632]
	str	x10, [x19, #640]
.LBB0_10:
	mov	w8, #15000
	cmp	x26, x8
	mov	w8, #19264
	movk	w8, #76, lsl #16
	b.gt	.LBB0_12
// %bb.11:
	str	xzr, [x19, #448]
	mov	x23, x27
	b	.LBB0_13
.LBB0_12:
	scvtf	d0, x27
	fmov	d1, #1.25000000
	fmul	d0, d0, d1
	fcvtzs	x9, d0
	scvtf	d0, x9
	fmul	d0, d0, d1
	add	x8, x27, x8
	fcvtzs	x9, d0
	cmp	x8, x9
	csel	x23, x8, x9, gt
	mov	w8, #64160
	movk	w8, #440, lsl #16
.LBB0_13:
	add	x0, x22, #1                     // =1
	mov	w1, #104
	str	x23, [x19, #416]
	str	x8, [x19, #456]
	bl	calloc
	mov	x20, x0
	str	x0, [x19, #552]
	mov	w1, #72
	mov	x0, x22
	bl	calloc
	mov	x24, x0
	str	x0, [x19, #592]
	mov	w1, #72
	mov	x0, x23
	bl	calloc
	mov	x25, x0
	str	x0, [x19, #584]
	mov	w1, #72
	mov	x0, x23
	bl	calloc
	str	x0, [x19, #568]
	cbz	x0, .LBB0_23
// %bb.14:
	cbz	x20, .LBB0_23
// %bb.15:
	cbz	x24, .LBB0_23
// %bb.16:
	cbz	x25, .LBB0_23
// %bb.17:
	mov	w8, #104
	mov	w9, #72
	madd	x8, x22, x8, x20
	mov	x23, x0
	cmp	x26, #1                         // =1
	madd	x10, x27, x9, x0
	madd	x9, x22, x9, x24
	add	x8, x8, #104                    // =104
	str	x10, [x19, #576]
	str	x8, [x19, #560]
	str	x9, [x19, #600]
	str	x20, [sp, #16]                  // 8-byte Folded Spill
	b.lt	.LBB0_27
// %bb.18:
	ldr	x24, [sp, #16]                  // 8-byte Folded Reload
	mov	x8, x20
	str	x28, [sp, #8]                   // 8-byte Folded Spill
	mov	x20, xzr
	mov	x22, xzr
	add	x27, x8, #104                   // =104
	mov	w28, #-1
.LBB0_19:                               // =>This Inner Loop Header: Depth=1
	ldr	x2, [sp, #8]                    // 8-byte Folded Reload
	add	x0, sp, #52                     // =52
	mov	w1, #200
	bl	fgets
	adrp	x1, .L.str.1
	add	x0, sp, #52                     // =52
	add	x2, sp, #40                     // =40
	add	x3, sp, #32                     // =32
	add	x1, x1, :lo12:.L.str.1
	bl	__isoc99_sscanf
	cmp	w0, #2                          // =2
	b.ne	.LBB0_24
// %bb.20:                              //   in Loop: Header=BB0_19 Depth=1
	ldp	x8, x9, [sp, #32]
	cmp	x9, x8
	b.gt	.LBB0_24
// %bb.21:                              //   in Loop: Header=BB0_19 Depth=1
	mov	x10, #-1
	str	w28, [x27, #96]
	str	x10, [x27, #80]
	ldr	x10, [x19, #408]
	mov	w21, #104
	add	x25, x20, #1                    // =1
	mov	w11, #1
	add	x10, x20, x10
	madd	x10, x10, x21, x24
	str	w25, [x10, #200]
	str	x11, [x10, #184]
	str	w9, [x27, #100]
	str	w8, [x10, #204]
	str	w22, [x23]
	ldr	x8, [x19, #400]
	mov	x0, x19
	madd	x8, x8, x21, x24
	stp	x8, x27, [x23, #16]
	ldr	x9, [x19, #528]
	add	x9, x9, #15                     // =15
	str	x9, [x23, #8]
	str	x9, [x23, #64]
	ldr	x9, [x8, #56]
	str	x9, [x23, #40]
	str	x23, [x8, #56]
	ldr	x8, [x27, #64]
	str	x8, [x23, #48]
	str	x23, [x27, #64]
	ldr	x26, [x19, #568]
	add	x23, x22, #1                    // =1
	mov	x1, x23
	bl	getArcPosition
	mov	w8, #72
	madd	x8, x0, x8, x26
	str	w23, [x8]
	ldr	x9, [x19, #408]
	mov	w11, #15
	add	x23, x22, #2                    // =2
	mov	x0, x19
	add	x9, x20, x9
	madd	x9, x9, x21, x24
	add	x10, x9, #104                   // =104
	str	x10, [x8, #16]
	ldr	x10, [x19, #400]
	str	x11, [x8, #8]
	str	x11, [x8, #64]
	mov	x1, x23
	madd	x10, x10, x21, x24
	str	x10, [x8, #24]
	ldr	x11, [x9, #160]
	str	x11, [x8, #40]
	str	x8, [x9, #160]
	ldr	x9, [x10, #64]
	str	x9, [x8, #48]
	str	x8, [x10, #64]
	ldr	x26, [x19, #568]
	bl	getArcPosition
	mov	w8, #72
	madd	x8, x0, x8, x26
	str	w23, [x8]
	str	x27, [x8, #16]
	ldr	x9, [x19, #408]
	mov	w11, #38528
	movk	w11, #152, lsl #16
	add	x22, x22, #3                    // =3
	add	x9, x20, x9
	madd	x9, x9, x21, x24
	add	x10, x9, #104                   // =104
	str	x10, [x8, #24]
	ldr	x10, [x19, #528]
	mov	x0, x19
	mov	x1, x22
	cmp	x10, x11
	csel	x10, x10, x11, gt
	lsl	x10, x10, #1
	str	x10, [x8, #8]
	str	x10, [x8, #64]
	ldr	x10, [x27, #56]
	str	x10, [x8, #40]
	str	x8, [x27, #56]
	ldr	x10, [x9, #168]
	str	x10, [x8, #48]
	str	x8, [x9, #168]
	ldr	x20, [x19, #568]
	bl	getArcPosition
	ldr	x26, [x19, #408]
	mov	w8, #72
	madd	x23, x0, x8, x20
	add	x27, x27, #104                  // =104
	cmp	x25, x26
	sub	w28, w28, #1                    // =1
	mov	x20, x25
	b.lt	.LBB0_19
// %bb.22:
	ldr	x28, [sp, #8]                   // 8-byte Folded Reload
	add	x8, x25, #1                     // =1
	add	x9, x26, #1                     // =1
	cmp	x8, x9
	b.ne	.LBB0_24
	b	.LBB0_28
.LBB0_23:
	adrp	x0, .Lstr
	add	x0, x0, :lo12:.Lstr
	bl	puts
	mov	x0, x19
	bl	getfree
.LBB0_24:
	mov	x0, #-1
.LBB0_25:
	adrp	x9, :got:__stack_chk_guard
	ldur	x8, [x29, #-16]
	ldr	x9, [x9, :got_lo12:__stack_chk_guard]
	ldr	x9, [x9]
	cmp	x9, x8
	b.ne	.LBB0_41
// %bb.26:
	ldp	x20, x19, [sp, #352]            // 16-byte Folded Reload
	ldp	x22, x21, [sp, #336]            // 16-byte Folded Reload
	ldp	x24, x23, [sp, #320]            // 16-byte Folded Reload
	ldp	x26, x25, [sp, #304]            // 16-byte Folded Reload
	ldp	x28, x27, [sp, #288]            // 16-byte Folded Reload
	ldp	x29, x30, [sp, #272]            // 16-byte Folded Reload
	add	sp, sp, #368                    // =368
	ret
.LBB0_27:
	mov	x22, xzr
	mov	w8, #1
	add	x9, x26, #1                     // =1
	cmp	x8, x9
	b.ne	.LBB0_24
.LBB0_28:
	ldr	x8, [x19, #432]
	cmp	x8, #1                          // =1
	b.lt	.LBB0_32
// %bb.29:
	adrp	x24, .L.str.5
	mov	x20, xzr
	add	x24, x24, :lo12:.L.str.5
	mov	w25, #104
	mov	w26, #72
.LBB0_30:                               // =>This Inner Loop Header: Depth=1
	add	x0, sp, #52                     // =52
	mov	w1, #200
	mov	x2, x28
	bl	fgets
	add	x0, sp, #52                     // =52
	add	x2, sp, #40                     // =40
	add	x3, sp, #32                     // =32
	add	x4, sp, #24                     // =24
	mov	x1, x24
	bl	__isoc99_sscanf
	cmp	w0, #3                          // =3
	b.ne	.LBB0_24
// %bb.31:                              //   in Loop: Header=BB0_30 Depth=1
	add	x8, x22, x20
	str	w8, [x23]
	ldr	x9, [sp, #40]
	ldr	x10, [x19, #408]
	ldr	x11, [sp, #16]                  // 8-byte Folded Reload
	add	x1, x8, #1                      // =1
	mov	x0, x19
	add	x9, x10, x9
	ldr	x10, [sp, #32]
	madd	x9, x9, x25, x11
	add	x20, x20, #1                    // =1
	madd	x10, x10, x25, x11
	stp	x9, x10, [x23, #16]
	ldr	x11, [sp, #24]
	str	x11, [x23, #64]
	str	x11, [x23, #8]
	ldr	x11, [x9, #56]
	str	x11, [x23, #40]
	str	x23, [x9, #56]
	ldr	x9, [x10, #64]
	str	x9, [x23, #48]
	str	x23, [x10, #64]
	ldr	x23, [x19, #568]
	bl	getArcPosition
	ldr	x8, [x19, #432]
	madd	x23, x0, x26, x23
	cmp	x20, x8
	b.lt	.LBB0_30
.LBB0_32:
	mov	x0, x28
	bl	fclose
	ldr	x15, [x19, #408]
	strb	wzr, [x19, #200]
	cmp	x15, #1                         // =1
	b.lt	.LBB0_38
// %bb.33:
	ldr	x14, [x19, #528]
	ldr	x9, [x19, #632]
	ldr	x10, [x19, #640]
	mov	w16, #38528
	ldr	x8, [x19, #624]
	ldr	x11, [x19, #568]
	movk	w16, #152, lsl #16
	cmp	x14, x16
	csel	x14, x14, x16, gt
	mul	x12, x10, x9
	sub	x13, x10, #1                    // =1
	cmp	x15, #1                         // =1
	neg	x14, x14, lsl #1
	b.ne	.LBB0_35
// %bb.34:
	mov	w16, #1
	b	.LBB0_39
.LBB0_35:
	and	x17, x15, #0xfffffffffffffffe
	orr	x16, x15, #0x1
	mov	w18, #5
	mov	w0, #72
	mov	x1, x17
.LBB0_36:                               // =>This Inner Loop Header: Depth=1
	sub	x2, x18, #3                     // =3
	sdiv	x4, x2, x8
	msub	x2, x4, x8, x2
	sdiv	x3, x18, x8
	subs	x6, x2, x9
	msub	x5, x3, x8, x18
	mul	x2, x10, x2
	madd	x6, x13, x6, x12
	csel	x2, x6, x2, gt
	mul	x6, x10, x5
	subs	x5, x5, x9
	madd	x5, x13, x5, x12
	add	x2, x2, x4
	csel	x4, x5, x6, gt
	add	x3, x4, x3
	madd	x2, x2, x0, x11
	subs	x1, x1, #2                      // =2
	madd	x3, x3, x0, x11
	add	x18, x18, #6                    // =6
	str	x14, [x2, #8]
	str	x14, [x3, #8]
	str	x14, [x2, #64]
	str	x14, [x3, #64]
	b.ne	.LBB0_36
// %bb.37:
	cmp	x15, x17
	b.ne	.LBB0_39
.LBB0_38:
	mov	x0, xzr
	b	.LBB0_25
.LBB0_39:
	sub	x15, x15, x16
	add	x16, x16, x16, lsl #1
	add	x15, x15, #1                    // =1
	sub	x16, x16, #1                    // =1
	mov	w17, #72
	mov	x0, xzr
.LBB0_40:                               // =>This Inner Loop Header: Depth=1
	sdiv	x18, x16, x8
	msub	x1, x18, x8, x16
	subs	x2, x1, x9
	mul	x1, x10, x1
	madd	x2, x13, x2, x12
	csel	x1, x2, x1, gt
	add	x18, x1, x18
	subs	x15, x15, #1                    // =1
	madd	x18, x18, x17, x11
	add	x16, x16, #3                    // =3
	str	x14, [x18, #8]
	str	x14, [x18, #64]
	b.ne	.LBB0_40
	b	.LBB0_25
.LBB0_41:
	bl	__stack_chk_fail
.Lfunc_end0:
	.size	read_min, .Lfunc_end0-read_min
                                        // -- End function
	.type	.L.str,@object                  // @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"r"
	.size	.L.str, 2

	.type	.L.str.1,@object                // @.str.1
.L.str.1:
	.asciz	"%ld %ld"
	.size	.L.str.1, 8

	.type	.L.str.5,@object                // @.str.5
.L.str.5:
	.asciz	"%ld %ld %ld"
	.size	.L.str.5, 12

	.type	.Lstr,@object                   // @str
.Lstr:
	.asciz	"read_min(): not enough memory"
	.size	.Lstr, 30

	.ident	"clang version 11.1.0"
	.section	".note.GNU-stack","",@progbits
	.addrsig
