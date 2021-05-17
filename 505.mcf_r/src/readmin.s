	.arch armv8.2-a+crc+sve
	.file	"readmin.c"
	.text
	.section	.rodata
	.align	3
.LC0:
	.string	"r"
	.align	3
.LC1:
	.string	"%ld %ld"
	.align	3
.LC2:
	.string	"readmin.c"
	.align	3
.LC3:
	.string	"net->max_new_m >= 3"
	.align	3
.LC4:
	.string	"read_min(): not enough memory"
	.align	3
.LC5:
	.string	"%ld %ld %ld"
	.text
	.align	2
	.global	read_min
	.type	read_min, %function
read_min:
.LFB8:
	.cfi_startproc
	addvl	sp, sp, #-10
	.cfi_escape 0xf,0x9,0x8f,0,0x92,0x2e,0,0x8,0x50,0x1e,0x22
	sub	sp, sp, #352
	.cfi_escape 0xf,0xc,0x8f,0,0x92,0x2e,0,0x8,0x50,0x1e,0x23,0xe0,0x2,0x22
	stp	x29, x30, [sp]
	.cfi_escape 0x10,0x1d,0x2,0x8f,0
	.cfi_escape 0x10,0x1e,0x2,0x8f,0x8
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_escape 0x10,0x13,0x2,0x8f,0x10
	str	x0, [sp, 40]
	cnth	x0
	mov	x1, x0
	lsl	x1, x1, 2
	add	x1, x1, x0
	lsl	x1, x1, 2
	sub	x1, x1, x0
	add	x1, sp, x1
	str	xzr, [x1, 320]
	addvl	x0, sp, #10
	str	xzr, [x0, 336]
	ldr	x2, [sp, 40]
	adrp	x0, .LC0
	add	x1, x0, :lo12:.LC0
	mov	x0, x2
	bl	fopen
	cnth	x1
	mov	x2, x1
	lsl	x2, x2, 2
	add	x2, x2, x1
	lsl	x2, x2, 2
	sub	x2, x2, x1
	add	x2, sp, x2
	str	x0, [x2, 320]
	cnth	x0
	mov	x1, x0
	lsl	x1, x1, 2
	add	x1, x1, x0
	lsl	x1, x1, 2
	sub	x1, x1, x0
	add	x1, sp, x1
	ldr	x0, [x1, 320]
	cmp	x0, 0
	bne	.L2
	mov	x0, -1
	b	.L29
.L2:
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #272
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x0, x1, x0
	cnth	x1
	mov	x2, x1
	lsl	x2, x2, 2
	add	x2, x2, x1
	lsl	x2, x2, 2
	sub	x2, x2, x1
	add	x2, sp, x2
	ldr	x2, [x2, 320]
	mov	w1, 200
	bl	fgets
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #288
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x2, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #280
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x1, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #272
	addvl	x3, sp, #10
	add	x3, x3, 352
	add	x4, x3, x0
	mov	x3, x2
	mov	x2, x1
	adrp	x0, .LC1
	add	x1, x0, :lo12:.LC1
	mov	x0, x4
	bl	__isoc99_sscanf
	cmp	w0, 2
	beq	.L4
	mov	x0, -1
	b	.L29
.L4:
	ldr	x1, [sp, 72]
	ldr	x0, [sp, 40]
	str	x1, [x0, 408]
	ldr	x1, [sp, 64]
	ldr	x0, [sp, 40]
	str	x1, [x0, 432]
	ldr	x0, [sp, 72]
	lsl	x0, x0, 1
	add	x1, x0, 1
	ldr	x0, [sp, 40]
	str	x1, [x0, 400]
	ldr	x1, [sp, 72]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x1, x0, x1
	ldr	x0, [sp, 64]
	add	x1, x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 424]
	ldr	x0, [sp, 40]
	mov	x1, 4000
	str	x1, [x0, 640]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 424]
	sub	x0, x0, #1
	mov	x1, 63439
	movk	x1, 0xe353, lsl 16
	movk	x1, 0x9ba5, lsl 32
	movk	x1, 0x20c4, lsl 48
	smulh	x1, x0, x1
	asr	x1, x1, 9
	asr	x0, x0, 63
	sub	x0, x1, x0
	add	x1, x0, 1
	ldr	x0, [sp, 40]
	str	x1, [x0, 624]
	ldr	x0, [sp, 40]
	ldr	x2, [x0, 424]
	mov	x0, 63439
	movk	x0, 0xe353, lsl 16
	movk	x0, 0x9ba5, lsl 32
	movk	x0, 0x20c4, lsl 48
	smulh	x0, x2, x0
	asr	x1, x0, 9
	asr	x0, x2, 63
	sub	x1, x1, x0
	mov	x0, x1
	lsl	x0, x0, 5
	sub	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 5
	sub	x1, x2, x0
	cmp	x1, 0
	beq	.L5
	ldr	x0, [sp, 40]
	ldr	x3, [x0, 624]
	ldr	x0, [sp, 40]
	ldr	x2, [x0, 424]
	mov	x0, 63439
	movk	x0, 0xe353, lsl 16
	movk	x0, 0x9ba5, lsl 32
	movk	x0, 0x20c4, lsl 48
	smulh	x0, x2, x0
	asr	x1, x0, 9
	asr	x0, x2, 63
	sub	x1, x1, x0
	mov	x0, x1
	lsl	x0, x0, 5
	sub	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 5
	sub	x1, x2, x0
	mov	x0, 4000
	sub	x0, x0, x1
	sub	x1, x3, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 632]
	b	.L7
.L5:
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 624]
	ldr	x0, [sp, 40]
	str	x1, [x0, 632]
	b	.L7
.L8:
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 624]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 632]
	add	x1, x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 632]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 640]
	sub	x1, x0, #1
	ldr	x0, [sp, 40]
	str	x1, [x0, 640]
.L7:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 632]
	cmp	x0, 0
	blt	.L8
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	mov	x0, 15000
	cmp	x1, x0
	bgt	.L9
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 424]
	ldr	x0, [sp, 40]
	str	x1, [x0, 416]
	ldr	x0, [sp, 40]
	mov	x1, 19264
	movk	x1, 0x4c, lsl 16
	str	x1, [x0, 456]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 416]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 424]
	sub	x1, x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 448]
	b	.L10
.L9:
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 424]
	mov	x0, 19263
	movk	x0, 0x4c, lsl 16
	add	x0, x1, x0
	ldr	x1, [sp, 40]
	ldr	d0, [x1, 424]
	scvtf	d1, d0
	fmov	d0, 1.25e+0
	fmul	d0, d1, d0
	fcvtzs	d0, d0
	scvtf	d1, d0
	fmov	d0, 1.25e+0
	fmul	d0, d1, d0
	fcvtzs	x1, d0
	cmp	x0, x1
	blt	.L11
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 424]
	mov	x0, 19264
	movk	x0, 0x4c, lsl 16
	add	x0, x1, x0
	fmov	d0, x0
	b	.L12
.L11:
	ldr	x0, [sp, 40]
	ldr	d0, [x0, 424]
	scvtf	d1, d0
	fmov	d0, 1.25e+0
	fmul	d0, d1, d0
	fcvtzs	d0, d0
	scvtf	d1, d0
	fmov	d0, 1.25e+0
	fmul	d0, d1, d0
	fcvtzs	d0, d0
.L12:
	ldr	x0, [sp, 40]
	str	d0, [x0, 416]
	ldr	x0, [sp, 40]
	mov	x1, 64160
	movk	x1, 0x1b8, lsl 16
	str	x1, [x0, 456]
.L10:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 456]
	cmp	x0, 2
	bgt	.L13
	adrp	x0, __PRETTY_FUNCTION__.0
	add	x3, x0, :lo12:__PRETTY_FUNCTION__.0
	mov	w2, 84
	adrp	x0, .LC2
	add	x1, x0, :lo12:.LC2
	adrp	x0, .LC3
	add	x0, x0, :lo12:.LC3
	bl	__assert_fail
.L13:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 400]
	add	x0, x0, 1
	mov	x1, 104
	bl	calloc
	mov	x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 552]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 400]
	mov	x1, 72
	bl	calloc
	mov	x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 592]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 416]
	mov	x1, 72
	bl	calloc
	mov	x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 584]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 416]
	mov	x1, 72
	bl	calloc
	mov	x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 568]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 552]
	cmp	x0, 0
	beq	.L14
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 568]
	cmp	x0, 0
	beq	.L14
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 592]
	cmp	x0, 0
	beq	.L14
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 584]
	cmp	x0, 0
	bne	.L15
.L14:
	adrp	x0, .LC4
	add	x0, x0, :lo12:.LC4
	bl	puts
	ldr	x0, [sp, 40]
	bl	getfree
	mov	x0, -1
	b	.L29
.L15:
	ldr	x0, [sp, 40]
	ldr	x2, [x0, 552]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 400]
	add	x1, x0, 1
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	add	x1, x2, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 560]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 568]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 424]
	mov	x2, x0
	mov	x0, x2
	lsl	x0, x0, 3
	add	x0, x0, x2
	lsl	x0, x0, 3
	add	x1, x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 576]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 592]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 400]
	mov	x2, x0
	mov	x0, x2
	lsl	x0, x0, 3
	add	x0, x0, x2
	lsl	x0, x0, 3
	add	x1, x1, x0
	ldr	x0, [sp, 40]
	str	x1, [x0, 600]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 552]
	cnth	x1
	mov	x2, x1
	lsl	x2, x2, 2
	add	x2, x2, x1
	lsl	x2, x2, 2
	sub	x2, x2, x1
	add	x2, sp, x2
	str	x0, [x2, 312]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 568]
	addvl	x1, sp, #10
	str	x0, [x1, 328]
	mov	x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 344]
	b	.L16
.L19:
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #272
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x0, x1, x0
	cnth	x1
	mov	x2, x1
	lsl	x2, x2, 2
	add	x2, x2, x1
	lsl	x2, x2, 2
	sub	x2, x2, x1
	add	x2, sp, x2
	ldr	x2, [x2, 320]
	mov	w1, 200
	bl	fgets
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #288
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x2, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #280
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x1, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #272
	addvl	x3, sp, #10
	add	x3, x3, 352
	add	x4, x3, x0
	mov	x3, x2
	mov	x2, x1
	adrp	x0, .LC1
	add	x1, x0, :lo12:.LC1
	mov	x0, x4
	bl	__isoc99_sscanf
	cmp	w0, 2
	bne	.L17
	ldr	x1, [sp, 72]
	ldr	x0, [sp, 64]
	cmp	x1, x0
	ble	.L18
.L17:
	mov	x0, -1
	b	.L29
.L18:
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	neg	w2, w0
	addvl	x0, sp, #10
	ldr	x1, [x0, 344]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x3, x0
	lsl	x3, x3, 2
	add	x3, x3, x0
	lsl	x3, x3, 2
	sub	x3, x3, x0
	add	x3, sp, x3
	ldr	x0, [x3, 312]
	add	x0, x0, x1
	mov	w1, w2
	str	w1, [x0, 96]
	addvl	x0, sp, #10
	ldr	x1, [x0, 344]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x0, x0, x1
	mov	x1, -1
	str	x1, [x0, 80]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x1, x0
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x0, x0, x1
	addvl	x1, sp, #10
	ldr	x1, [x1, 344]
	str	w1, [x0, 96]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x1, x0
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x0, x0, x1
	mov	x1, 1
	str	x1, [x0, 80]
	ldr	x2, [sp, 72]
	addvl	x0, sp, #10
	ldr	x1, [x0, 344]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x3, x0
	lsl	x3, x3, 2
	add	x3, x3, x0
	lsl	x3, x3, 2
	sub	x3, x3, x0
	add	x3, sp, x3
	ldr	x0, [x3, 312]
	add	x0, x0, x1
	mov	w1, w2
	str	w1, [x0, 100]
	ldr	x2, [sp, 64]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x1, x0
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x3, x0
	lsl	x3, x3, 2
	add	x3, x3, x0
	lsl	x3, x3, 2
	sub	x3, x3, x0
	add	x3, sp, x3
	ldr	x0, [x3, 312]
	add	x0, x0, x1
	mov	w1, w2
	str	w1, [x0, 100]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	mov	w1, w0
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	w1, [x0]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 400]
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 16]
	addvl	x0, sp, #10
	ldr	x1, [x0, 344]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 24]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 528]
	add	x1, x0, 15
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	ldr	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 40]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	ldr	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 48]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 64]
	ldr	x0, [sp, 40]
	ldr	x19, [x0, 568]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	add	x0, x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 336]
	addvl	x0, sp, #10
	ldr	x1, [x0, 336]
	ldr	x0, [sp, 40]
	bl	getArcPosition
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 3
	add	x0, x0, x1
	lsl	x0, x0, 3
	add	x0, x19, x0
	addvl	x1, sp, #10
	str	x0, [x1, 328]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	mov	w1, w0
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	w1, [x0]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x1, x0
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 16]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 400]
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 24]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	mov	x1, 15
	str	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	ldr	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 40]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	ldr	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 48]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 64]
	ldr	x0, [sp, 40]
	ldr	x19, [x0, 568]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	add	x0, x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 336]
	addvl	x0, sp, #10
	ldr	x1, [x0, 336]
	ldr	x0, [sp, 40]
	bl	getArcPosition
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 3
	add	x0, x0, x1
	lsl	x0, x0, 3
	add	x0, x19, x0
	addvl	x1, sp, #10
	str	x0, [x1, 328]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	mov	w1, w0
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	w1, [x0]
	addvl	x0, sp, #10
	ldr	x1, [x0, 344]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 16]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x1, x0
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 24]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 528]
	mov	x2, 38528
	movk	x2, 0x98, lsl 16
	mov	x1, 38528
	movk	x1, 0x98, lsl 16
	cmp	x0, x2
	csel	x0, x0, x1, ge
	lsl	x1, x0, 1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	ldr	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 40]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	ldr	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 48]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 64]
	ldr	x0, [sp, 40]
	ldr	x19, [x0, 568]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	add	x0, x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 336]
	addvl	x0, sp, #10
	ldr	x1, [x0, 336]
	ldr	x0, [sp, 40]
	bl	getArcPosition
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 3
	add	x0, x0, x1
	lsl	x0, x0, 3
	add	x0, x19, x0
	addvl	x1, sp, #10
	str	x0, [x1, 328]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 344]
.L16:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 408]
	addvl	x1, sp, #10
	ldr	x1, [x1, 344]
	cmp	x1, x0
	ble	.L19
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 408]
	add	x0, x0, 1
	addvl	x1, sp, #10
	ldr	x1, [x1, 344]
	cmp	x1, x0
	beq	.L20
	mov	x0, -1
	b	.L29
.L20:
	addvl	x0, sp, #10
	str	xzr, [x0, 344]
	b	.L21
.L23:
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #272
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x0, x1, x0
	cnth	x1
	mov	x2, x1
	lsl	x2, x2, 2
	add	x2, x2, x1
	lsl	x2, x2, 2
	sub	x2, x2, x1
	add	x2, sp, x2
	ldr	x2, [x2, 320]
	mov	w1, 200
	bl	fgets
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #296
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x3, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #288
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x2, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #280
	addvl	x1, sp, #10
	add	x1, x1, 352
	add	x1, x1, x0
	cntb	x0, all, mul #10
	neg	x0, x0
	sub	x0, x0, #272
	addvl	x4, sp, #10
	add	x4, x4, 352
	add	x5, x4, x0
	mov	x4, x3
	mov	x3, x2
	mov	x2, x1
	adrp	x0, .LC5
	add	x1, x0, :lo12:.LC5
	mov	x0, x5
	bl	__isoc99_sscanf
	cmp	w0, 3
	beq	.L22
	mov	x0, -1
	b	.L29
.L22:
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	mov	w1, w0
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	w1, [x0]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	ldr	x0, [sp, 72]
	add	x0, x1, x0
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 16]
	ldr	x0, [sp, 64]
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	lsl	x0, x0, 2
	add	x0, x0, x1
	lsl	x0, x0, 3
	mov	x1, x0
	cnth	x0
	mov	x2, x0
	lsl	x2, x2, 2
	add	x2, x2, x0
	lsl	x2, x2, 2
	sub	x2, x2, x0
	add	x2, sp, x2
	ldr	x0, [x2, 312]
	add	x1, x0, x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 24]
	ldr	x1, [sp, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 64]
	ldr	x1, [sp, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 8]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	ldr	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 40]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 16]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 56]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	ldr	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	str	x1, [x0, 48]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	ldr	x0, [x0, 24]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 64]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 344]
	ldr	x0, [sp, 40]
	ldr	x19, [x0, 568]
	addvl	x0, sp, #10
	ldr	x0, [x0, 336]
	add	x0, x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 336]
	addvl	x0, sp, #10
	ldr	x1, [x0, 336]
	ldr	x0, [sp, 40]
	bl	getArcPosition
	mov	x1, x0
	mov	x0, x1
	lsl	x0, x0, 3
	add	x0, x0, x1
	lsl	x0, x0, 3
	add	x0, x19, x0
	addvl	x1, sp, #10
	str	x0, [x1, 328]
.L21:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 432]
	addvl	x1, sp, #10
	ldr	x1, [x1, 344]
	cmp	x1, x0
	blt	.L23
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 576]
	addvl	x1, sp, #10
	str	x0, [x1, 328]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 576]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	cmp	x1, x0
	beq	.L24
	ldr	x0, [sp, 40]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	str	x1, [x0, 576]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 568]
	addvl	x1, sp, #10
	str	x0, [x1, 328]
	ldr	x0, [sp, 40]
	str	xzr, [x0, 424]
	b	.L25
.L26:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 424]
	add	x1, x0, 1
	ldr	x0, [sp, 40]
	str	x1, [x0, 424]
	addvl	x0, sp, #10
	ldr	x0, [x0, 328]
	add	x0, x0, 72
	addvl	x1, sp, #10
	str	x0, [x1, 328]
.L25:
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 576]
	addvl	x1, sp, #10
	ldr	x1, [x1, 328]
	cmp	x1, x0
	bcc	.L26
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 424]
	ldr	x0, [sp, 40]
	str	x1, [x0, 432]
.L24:
	cnth	x0
	mov	x1, x0
	lsl	x1, x1, 2
	add	x1, x1, x0
	lsl	x1, x1, 2
	sub	x1, x1, x0
	add	x1, sp, x1
	ldr	x0, [x1, 320]
	bl	fclose
	ldr	x0, [sp, 40]
	strb	wzr, [x0, 200]
	mov	x0, 1
	addvl	x1, sp, #10
	str	x0, [x1, 344]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 408]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	whilele	p0.d, x0, x1
	add	x0, sp, 328
	str	p0, [x0, #79, mul vl]
	b	.L27
.L28:
	addvl	x0, sp, #10
	ldr	x1, [x0, 344]
	mov	x0, x1
	lsl	x0, x0, 1
	add	x0, x0, x1
	sub	x0, x0, #1
	mov	z0.d, x0
	ptrue	p0.b, all
	add	x0, sp, 320
	incb	x0, all, mul #8
	st1d	z0.d, p0, [x0]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 624]
	mov	z0.d, x0
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	incb	x0, all, mul #8
	ld1d	z1.d, p1/z, [x0]
	movprfx	z0.d, p0/z, z0.d
	udivr	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 320
	st1d	z0.d, p0, [x0, #7, mul vl]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 624]
	mov	z0.d, x0
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z1.d, p1/z, [x0, #7, mul vl]
	movprfx	z0.d, p0/z, z0.d
	mul	z0.d, p0/m, z0.d, z1.d
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	incb	x0, all, mul #8
	ld1d	z1.d, p1/z, [x0]
	movprfx	z0.d, p0/z, z0.d
	subr	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 320
	st1d	z0.d, p0, [x0, #6, mul vl]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 632]
	mov	z0.d, x0
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z1.d, p1/z, [x0, #6, mul vl]
	cmphi	p0.d, p0/z, z1.d, z0.d
	add	x0, sp, 320
	str	p0, [x0, #47, mul vl]
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	add	x0, sp, 320
	ldr	p1, [x0, #47, mul vl]
	eor	p0.b, p0/z, p0.b, p1.b
	add	x0, sp, 320
	str	p0, [x0, #46, mul vl]
	ptrue	p0.b, all
	add	x0, sp, 320
	ld1d	z0.d, p0/z, [x0, #7, mul vl]
	add	x0, sp, 320
	st1d	z0.d, p0, [x0, #4, mul vl]
	ldr	x0, [sp, 40]
	ldr	x1, [x0, 632]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 640]
	mul	x0, x1, x0
	addvl	x1, sp, #4
	str	x0, [x1, 312]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 640]
	sub	x0, x0, #1
	addvl	x1, sp, #4
	str	x0, [x1, 304]
	addvl	x0, sp, #4
	ldr	x0, [x0, 304]
	mov	z0.d, x0
	mov	z2.d, z0.d
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 632]
	mov	z0.d, x0
	add	x0, sp, 320
	ldr	p0, [x0, #47, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z1.d, p1/z, [x0, #6, mul vl]
	movprfx	z1.d, p0/z, z1.d
	sub	z1.d, p0/m, z1.d, z0.d
	addvl	x0, sp, #4
	ldr	x0, [x0, 312]
	mov	z0.d, x0
	add	x0, sp, 320
	ldr	p0, [x0, #47, mul vl]
	movprfx	z1.d, p0/z, z1.d
	mad	z1.d, p0/m, z2.d, z0.d
	add	x0, sp, 320
	ldr	p0, [x0, #47, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z0.d, p1/z, [x0, #4, mul vl]
	add	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 320
	st1d	z0.d, p0, [x0, #4, mul vl]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 640]
	mov	z0.d, x0
	add	x0, sp, 320
	ldr	p0, [x0, #46, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z1.d, p1/z, [x0, #6, mul vl]
	movprfx	z1.d, p0/z, z1.d
	mul	z1.d, p0/m, z1.d, z0.d
	add	x0, sp, 320
	ldr	p0, [x0, #46, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z0.d, p1/z, [x0, #4, mul vl]
	add	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 320
	st1d	z0.d, p0, [x0, #4, mul vl]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 568]
	mov	z0.d, x0
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 320
	ld1d	z1.d, p1/z, [x0, #4, mul vl]
	movprfx	z0.d, p0/z, z0.d
	add	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 304
	st1d	z0.d, p0, [x0, #3, mul vl]
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 304
	ld1d	z1.d, p1/z, [x0, #3, mul vl]
	mov	z0.d, #8
	movprfx	z0.d, p0/z, z0.d
	add	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 304
	st1d	z0.d, p0, [x0, #2, mul vl]
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	ptrue	p1.b, all
	add	x0, sp, 304
	ld1d	z1.d, p1/z, [x0, #3, mul vl]
	mov	z0.d, #64
	movprfx	z0.d, p0/z, z0.d
	add	z0.d, p0/m, z0.d, z1.d
	ptrue	p0.b, all
	add	x0, sp, 304
	st1d	z0.d, p0, [x0, #1, mul vl]
	ldr	x0, [sp, 40]
	ldr	x0, [x0, 528]
	mov	x2, 38528
	movk	x2, 0x98, lsl 16
	mov	x1, 38528
	movk	x1, 0x98, lsl 16
	cmp	x0, x2
	csel	x1, x0, x1, ge
	mov	x0, 0
	sub	x0, x0, x1
	lsl	x0, x0, 1
	addvl	x1, sp, #1
	str	x0, [x1, 296]
	addvl	x0, sp, #1
	ldr	x0, [x0, 296]
	mov	z0.d, x0
	ptrue	p0.b, all
	add	x0, sp, 288
	st1d	z0.d, p0, [x0]
	ptrue	p0.b, all
	add	x0, sp, 304
	ld1d	z0.d, p0/z, [x0, #2, mul vl]
	ptrue	p0.b, all
	add	x0, sp, 288
	ld1d	z1.d, p0/z, [x0]
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	st1d	z1.d, p0, [z0.d]
	ptrue	p0.b, all
	add	x0, sp, 304
	ld1d	z0.d, p0/z, [x0, #1, mul vl]
	ptrue	p0.b, all
	add	x0, sp, 288
	ld1d	z1.d, p0/z, [x0]
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	st1d	z1.d, p0, [z0.d]
	cntd	x1
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	add	x0, x1, x0
	addvl	x1, sp, #10
	str	x0, [x1, 344]
	addvl	x0, sp, #10
	ldr	x0, [x0, 344]
	ldr	x1, [sp, 40]
	ldr	x1, [x1, 408]
	whilels	p0.d, x0, x1
	add	x0, sp, 328
	str	p0, [x0, #79, mul vl]
.L27:
	add	x0, sp, 328
	ldr	p0, [x0, #79, mul vl]
	add	x0, sp, 328
	ldr	p1, [x0, #79, mul vl]
	ptest	p0, p1.b
	cset	x0, first
	cmp	w0, 0
	bne	.L28
	mov	x0, 0
.L29:
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp]
	.cfi_restore 29
	.cfi_restore 30
	.cfi_restore 19
	addvl	sp, sp, #10
	.cfi_def_cfa_offset 352
	add	sp, sp, 352
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE8:
	.size	read_min, .-read_min
	.section	.rodata
	.align	3
	.type	__PRETTY_FUNCTION__.0, %object
	.size	__PRETTY_FUNCTION__.0, 9
__PRETTY_FUNCTION__.0:
	.string	"read_min"
	.ident	"GCC: (GNU) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
