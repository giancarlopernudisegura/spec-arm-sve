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
	.cfi_startproc
// %bb.0:                               // %entry
	sub	sp, sp, #352                    // =352
	stp	x29, x30, [sp, #256]            // 16-byte Folded Spill
	stp	x28, x27, [sp, #272]            // 16-byte Folded Spill
	stp	x26, x25, [sp, #288]            // 16-byte Folded Spill
	stp	x24, x23, [sp, #304]            // 16-byte Folded Spill
	stp	x22, x21, [sp, #320]            // 16-byte Folded Spill
	stp	x20, x19, [sp, #336]            // 16-byte Folded Spill
	add	x29, sp, #256                   // =256
	.cfi_def_cfa w29, 96
	.cfi_offset w19, -8
	.cfi_offset w20, -16
	.cfi_offset w21, -24
	.cfi_offset w22, -32
	.cfi_offset w23, -40
	.cfi_offset w24, -48
	.cfi_offset w25, -56
	.cfi_offset w26, -64
	.cfi_offset w27, -72
	.cfi_offset w28, -80
	.cfi_offset w30, -88
	.cfi_offset w29, -96
	adrp	x1, .L.str
	add	x1, x1, :lo12:.L.str
	mov	x19, x0
	bl	fopen
	cbz	x0, .LBB0_24
// %bb.1:                               // %if.end
	mov	x28, x0
	add	x0, sp, #44                     // =44
	mov	w1, #200
	mov	x2, x28
	bl	fgets
	adrp	x1, .L.str.1
	add	x1, x1, :lo12:.L.str.1
	add	x0, sp, #44                     // =44
	add	x2, sp, #32                     // =32
	add	x3, sp, #24                     // =24
	bl	__isoc99_sscanf
	cmp	w0, #2                          // =2
	b.ne	.LBB0_24
// %bb.2:                               // %if.end7
	ldp	x9, x26, [sp, #24]
	mov	x11, #63439
	movk	x11, #58195, lsl #16
	movk	x11, #39845, lsl #32
	lsl	x8, x26, #1
	add	x12, x8, x26
	movk	x11, #8388, lsl #48
	add	x27, x9, x12
	stp	x27, x9, [x19, #424]
	sub	x9, x27, #1                     // =1
	smulh	x12, x27, x11
	smulh	x9, x9, x11
	asr	x11, x12, #9
	mov	w10, #4000
	asr	x13, x9, #9
	add	x12, x11, x12, lsr #63
	add	x11, x13, x9, lsr #63
	msub	x9, x12, x10, x27
	sub	x12, x9, #4000                  // =4000
	cmp	x9, #0                          // =0
	mov	w22, #1
	str	x10, [x19, #640]
	add	x10, x11, #1                    // =1
	csel	x12, xzr, x12, eq
	bfi	x22, x26, #1, #63
	adds	x9, x10, x12
	stp	x22, x26, [x19, #400]
	str	x10, [x19, #624]
	str	x9, [x19, #632]
	b.mi	.LBB0_5
// %bb.3:                               // %while.end
	mov	w9, #15000
	cmp	x26, x9
	mov	w9, #19264
	movk	w9, #76, lsl #16
	b.gt	.LBB0_12
.LBB0_4:                                // %if.then34
	str	xzr, [x19, #448]
	mov	x23, x27
	b	.LBB0_13
.LBB0_5:                                // %while.body.preheader
	add	x11, x12, x11
	mov	x12, #-2
	sub	x11, x12, x11
	udiv	x11, x11, x10
	add	x11, x11, #1                    // =1
	cmp	x11, #4                         // =4
	b.hs	.LBB0_7
// %bb.6:
	mov	w11, #4000
	b	.LBB0_10
.LBB0_7:                                // %vector.ph
	adrp	x14, .LCPI0_0
	ldr	q0, [x14, :lo12:.LCPI0_0]
	and	x12, x11, #0xfffffffffffffffc
	mov	x13, xzr
	madd	x9, x12, x10, x9
	movi	v1.2d, #0000000000000000
	movi	v2.2d, #0xffffffffffffffff
.LBB0_8:                                // %vector.body
                                        // =>This Inner Loop Header: Depth=1
	add	x13, x13, #4                    // =4
	add	v0.2d, v0.2d, v2.2d
	cmp	x13, x12
	add	v1.2d, v1.2d, v2.2d
	b.ne	.LBB0_8
// %bb.9:                               // %middle.block
	add	v0.2d, v1.2d, v0.2d
	addp	d0, v0.2d
	cmp	x11, x12
	fmov	x11, d0
	b.eq	.LBB0_11
.LBB0_10:                               // %while.body
                                        // =>This Inner Loop Header: Depth=1
	add	x9, x9, x10
	sub	x11, x11, #1                    // =1
	tbnz	x9, #63, .LBB0_10
.LBB0_11:                               // %while.cond.while.end_crit_edge
	str	x9, [x19, #632]
	str	x11, [x19, #640]
	mov	w9, #15000
	cmp	x26, x9
	mov	w9, #19264
	movk	w9, #76, lsl #16
	b.le	.LBB0_4
.LBB0_12:                               // %if.else39
	scvtf	d0, x27
	fmov	d1, #1.25000000
	fmul	d0, d0, d1
	fcvtzs	d0, d0
	scvtf	d0, d0
	fmul	d0, d0, d1
	add	x9, x27, x9
	fcvtzs	x10, d0
	cmp	x9, x10
	csel	x23, x9, x10, gt
	mov	w9, #64160
	movk	w9, #440, lsl #16
.LBB0_13:                               // %if.end66
	add	x0, x8, #2                      // =2
	mov	w1, #104
	str	x23, [x19, #416]
	str	x9, [x19, #456]
	bl	calloc
	mov	x21, x0
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
// %bb.14:                              // %if.end66
	cbz	x21, .LBB0_23
// %bb.15:                              // %if.end66
	cbz	x24, .LBB0_23
// %bb.16:                              // %if.end66
	cbz	x25, .LBB0_23
// %bb.17:                              // %if.end88
	mov	w8, #104
	mov	w9, #72
	madd	x8, x22, x8, x21
	mov	x23, x0
	cmp	x26, #1                         // =1
	madd	x10, x27, x9, x0
	madd	x9, x22, x9, x24
	add	x8, x8, #104                    // =104
	str	x10, [x19, #576]
	str	x8, [x19, #560]
	str	x9, [x19, #600]
	b.lt	.LBB0_26
// %bb.18:                              // %for.body.preheader
	str	x28, [sp, #8]                   // 8-byte Folded Spill
	mov	x20, xzr
	mov	x22, xzr
	add	x27, x21, #104                  // =104
	mov	w28, #-1
.LBB0_19:                               // %for.body
                                        // =>This Inner Loop Header: Depth=1
	ldr	x2, [sp, #8]                    // 8-byte Folded Reload
	add	x0, sp, #44                     // =44
	mov	w1, #200
	bl	fgets
	adrp	x1, .L.str.1
	add	x0, sp, #44                     // =44
	add	x2, sp, #32                     // =32
	add	x3, sp, #24                     // =24
	add	x1, x1, :lo12:.L.str.1
	bl	__isoc99_sscanf
	cmp	w0, #2                          // =2
	b.ne	.LBB0_24
// %bb.20:                              // %lor.lhs.false
                                        //   in Loop: Header=BB0_19 Depth=1
	ldp	x8, x9, [sp, #24]
	cmp	x9, x8
	b.gt	.LBB0_24
// %bb.21:                              // %if.end112
                                        //   in Loop: Header=BB0_19 Depth=1
	ldr	x10, [x19, #408]
	stp	w28, w9, [x27, #96]
	mov	w24, #104
	add	x25, x20, #1                    // =1
	add	x9, x20, x10
	mov	x11, #-1
	madd	x9, x9, x24, x21
	mov	w10, #1
	str	x11, [x27, #80]
	str	x10, [x9, #184]
	stp	w25, w8, [x9, #200]
	str	w22, [x23]
	ldr	x8, [x19, #400]
	mov	x0, x19
	madd	x8, x8, x24, x21
	stp	x8, x27, [x23, #16]
	ldr	x9, [x19, #528]
	add	x9, x9, #15                     // =15
	str	x9, [x23, #8]
	str	x9, [x23, #64]
	ldr	x9, [x8, #56]
	str	x9, [x23, #40]
	ldr	x9, [x27, #64]
	str	x23, [x8, #56]
	str	x9, [x23, #48]
	ldr	x26, [x19, #568]
	str	x23, [x27, #64]
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
	madd	x9, x9, x24, x21
	add	x10, x9, #104                   // =104
	str	x10, [x8, #16]
	ldr	x10, [x19, #400]
	str	x11, [x8, #8]
	str	x11, [x8, #64]
	mov	x1, x23
	madd	x10, x10, x24, x21
	str	x10, [x8, #24]
	ldr	x11, [x9, #160]
	str	x11, [x8, #40]
	ldr	x11, [x10, #64]
	str	x8, [x9, #160]
	str	x11, [x8, #48]
	ldr	x26, [x19, #568]
	str	x8, [x10, #64]
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
	madd	x9, x9, x24, x21
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
	ldr	x10, [x9, #168]
	str	x8, [x27, #56]
	str	x10, [x8, #48]
	ldr	x20, [x19, #568]
	str	x8, [x9, #168]
	bl	getArcPosition
	ldr	x26, [x19, #408]
	mov	w8, #72
	madd	x23, x0, x8, x20
	add	x27, x27, #104                  // =104
	cmp	x25, x26
	sub	w28, w28, #1                    // =1
	mov	x20, x25
	b.lt	.LBB0_19
// %bb.22:                              // %for.end.loopexit
	ldr	x28, [sp, #8]                   // 8-byte Folded Reload
	add	x8, x25, #1                     // =1
	add	x9, x26, #1                     // =1
	cmp	x8, x9
	b.ne	.LBB0_24
	b	.LBB0_27
.LBB0_23:                               // %if.then85
	adrp	x0, .Lstr
	add	x0, x0, :lo12:.Lstr
	bl	puts
	mov	x0, x19
	bl	getfree
.LBB0_24:                               // %cleanup
	mov	x0, #-1
.LBB0_25:                               // %cleanup
	ldp	x20, x19, [sp, #336]            // 16-byte Folded Reload
	ldp	x22, x21, [sp, #320]            // 16-byte Folded Reload
	ldp	x24, x23, [sp, #304]            // 16-byte Folded Reload
	ldp	x26, x25, [sp, #288]            // 16-byte Folded Reload
	ldp	x28, x27, [sp, #272]            // 16-byte Folded Reload
	ldp	x29, x30, [sp, #256]            // 16-byte Folded Reload
	add	sp, sp, #352                    // =352
	ret
.LBB0_26:
	mov	x22, xzr
	mov	w8, #1
	add	x9, x26, #1                     // =1
	cmp	x8, x9
	b.ne	.LBB0_24
.LBB0_27:                               // %for.cond211.preheader
	ldr	x8, [x19, #432]
	cmp	x8, #1                          // =1
	b.lt	.LBB0_31
// %bb.28:                              // %for.body215.preheader
	adrp	x24, .L.str.5
	mov	x20, xzr
	add	x24, x24, :lo12:.L.str.5
	mov	w25, #104
	mov	w26, #72
.LBB0_29:                               // %for.body215
                                        // =>This Inner Loop Header: Depth=1
	add	x0, sp, #44                     // =44
	mov	w1, #200
	mov	x2, x28
	bl	fgets
	add	x0, sp, #44                     // =44
	add	x2, sp, #32                     // =32
	add	x3, sp, #24                     // =24
	add	x4, sp, #16                     // =16
	mov	x1, x24
	bl	__isoc99_sscanf
	cmp	w0, #3                          // =3
	b.ne	.LBB0_24
// %bb.30:                              // %if.end223
                                        //   in Loop: Header=BB0_29 Depth=1
	add	x8, x22, x20
	str	w8, [x23]
	ldp	x11, x9, [sp, #24]
	ldr	x10, [x19, #408]
	ldr	x12, [sp, #16]
	add	x1, x8, #1                      // =1
	mov	x0, x19
	add	x9, x10, x9
	madd	x10, x11, x25, x21
	madd	x9, x9, x25, x21
	str	x12, [x23, #64]
	stp	x9, x10, [x23, #16]
	str	x12, [x23, #8]
	ldr	x11, [x9, #56]
	add	x20, x20, #1                    // =1
	str	x11, [x23, #40]
	ldr	x11, [x10, #64]
	str	x23, [x9, #56]
	str	x11, [x23, #48]
	ldr	x27, [x19, #568]
	str	x23, [x10, #64]
	bl	getArcPosition
	ldr	x8, [x19, #432]
	madd	x23, x0, x26, x27
	cmp	x20, x8
	b.lt	.LBB0_29
.LBB0_31:                               // %if.end270
	mov	x0, x28
	bl	fclose
	ldr	x8, [x19, #408]
	mov	w9, #1
	strb	wzr, [x19, #200]
	whilele	p1.d, x9, x8
	cset	w8, mi
	cmp	w8, #1                          // =1
	b.ne	.LBB0_34
// %bb.32:                              // %while.body275.lr.ph
	ptrue	p2.d
	ptrue	p0.b
	mov	w8, #38528
	cntd	x9
	movk	w8, #152, lsl #16
	mov	z0.d, #8                        // =0x8
	mov	z1.d, #64                       // =0x40
	cntd	x10, all, mul #3
	mov	w11, #2
	mov	z2.d, #0                        // =0x0
	and	p2.b, p0/z, p1.b, p2.b
	add	x12, x9, #1                     // =1
	ptrue	p1.d
.LBB0_33:                               // %while.body275
                                        // =>This Inner Loop Header: Depth=1
	ldr	x13, [x19, #624]
	mov	z3.d, x11
	sel	z3.d, p2, z3.d, z2.d
	ldr	x14, [x19, #632]
	mov	z4.d, x13
	mov	z5.d, z3.d
	ldr	x15, [x19, #640]
	udiv	z5.d, p2/m, z5.d, z4.d
	sel	z16.d, p2, z5.d, z2.d
	mul	z16.d, p2/m, z16.d, z4.d
	mov	z6.d, x14
	sub	z3.d, p2/m, z3.d, z16.d
	mul	x13, x15, x14
	sub	x14, x15, #1                    // =1
	cmphi	p3.d, p2/z, z3.d, z6.d
	mov	z4.d, x14
	sel	z16.d, p3, z3.d, z2.d
	and	p4.b, p0/z, p3.b, p1.b
	ldr	x14, [x19, #568]
	sub	z16.d, p3/m, z16.d, z6.d
	mov	z6.d, x13
	sel	z4.d, p3, z4.d, z2.d
	not	p4.b, p2/z, p4.b
	mov	z7.d, x15
	ldr	x13, [x19, #528]
	mad	z4.d, p3/m, z16.d, z6.d
	sel	z3.d, p4, z3.d, z2.d
	add	z5.d, p3/m, z5.d, z4.d
	mul	z3.d, p4/m, z3.d, z7.d
	add	z5.d, p4/m, z5.d, z3.d
	mov	z6.d, x14
	sel	z3.d, p2, z5.d, z2.d
	cmp	x13, x8
	add	z3.d, p2/m, z3.d, z6.d
	csel	x13, x13, x8, gt
	sel	z3.d, p2, z3.d, z2.d
	neg	x13, x13, lsl #1
	mov	z5.d, z3.d
	mov	z4.d, x13
	add	z3.d, p2/m, z3.d, z1.d
	add	z5.d, p2/m, z5.d, z0.d
	st1d	{ z4.d }, p2, [z5.d]
	st1d	{ z4.d }, p2, [z3.d]
	ldr	x13, [x19, #408]
	mov	x0, xzr
	add	x11, x11, x10
	whilels	p2.d, x12, x13
	and	p2.b, p0/z, p2.b, p1.b
	add	x12, x12, x9
	b.mi	.LBB0_33
	b	.LBB0_25
.LBB0_34:
	mov	x0, xzr
	b	.LBB0_25
.Lfunc_end0:
	.size	read_min, .Lfunc_end0-read_min
	.cfi_endproc
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

	.ident	"clang version 13.0.0 (git@github.com:llvm/llvm-project.git 7fbc7bfdfddd85e12156556e3c074f6dcef865df)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
