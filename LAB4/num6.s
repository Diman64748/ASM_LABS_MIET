	.text
	.globl	main
main:
	pushq	%rbp
	movq	%rsp, %rbp

	subq	$32, %rsp
	movl	$1, -32(%rbp)
	movl	$2, -28(%rbp)
	movl	$3, -24(%rbp)
	movl	$4, -20(%rbp)
	movl	$5, -16(%rbp)
	movl	$6, -12(%rbp)
	movl	$7, -8(%rbp)
	movl	$8, -4(%rbp)
	movl	-12(%rbp), %r9d
	movl	-16(%rbp), %r8d
	movl	-20(%rbp), %ecx
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %esi
	movl	-32(%rbp), %eax
	movl	-4(%rbp), %edi
	pushq	%rdi
	movl	-8(%rbp), %edi
	pushq	%rdi
	movl	%eax, %edi
	call	func
	addq	$16, %rsp

	leave

	ret

