.LC0:
	.string	"%hd %d %ld %f %lf"
.LC1:
	.string	"%hd %d %ld %.2f %.2f"
	.globl	main
	.text
main:
	.cfi_startproc
	endbr64
	subq	$56, %rsp
	.cfi_def_cfa_offset 64
	leaq	.LC0(%rip), %rdi
	movq	%fs:40, %rax
	movq	%rax, 40(%rsp)
	xorl	%eax, %eax
	leaq	24(%rsp), %rcx
	leaq	16(%rsp), %rdx
	leaq	14(%rsp), %rsi
	leaq	20(%rsp), %r8
	leaq	32(%rsp), %r9
	call	__isoc99_scanf@PLT
	movswl	14(%rsp), %edx
	movsd	32(%rsp), %xmm1
	pxor	%xmm0, %xmm0
	movq	24(%rsp), %r8
	movl	16(%rsp), %ecx
	movl	$2, %edi
	leaq	.LC1(%rip), %rsi
	movl	$2, %eax
	cvtss2sd	20(%rsp), %xmm0
	call	__printf_chk@PLT
	movq	40(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L5
	xorl	%eax, %eax
	addq	$56, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
