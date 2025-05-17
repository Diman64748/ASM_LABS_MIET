.LC0:
	.string	"%hd %d %ld %f %lf"
.LC1:
	.string	"%hd %d %ld %.2f %.2f"
	.text
	.globl	main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rdi
	leaq	-28(%rbp), %rsi
	leaq	-24(%rbp), %rcx
	leaq	-32(%rbp), %rdx
	leaq	-34(%rbp), %rax
	movq	%rdi, %r9
	movq	%rsi, %r8
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT


	movsd	-16(%rbp), %xmm0
	movss	-28(%rbp), %xmm1
	pxor	%xmm2, %xmm2
	cvtss2sd	%xmm1, %xmm2
	movq	%xmm2, %rsi
	movq	-24(%rbp), %rcx
	movl	-32(%rbp), %edx
	movzwl	-34(%rbp), %eax
	movapd	%xmm0, %xmm1
	movq	%rsi, %xmm0
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$2, %eax
	call	printf@PLT


	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	leave

	ret
