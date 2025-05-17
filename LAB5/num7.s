.text
.globl main

STR: .string "%d "

main:
    subq $8,%rsp
    movq $10 , %rbx #; N
    movq $1 , %r12
    xorl %eax,%eax

START:
    movq $2 , %rdi
    leaq STR(%rip), %rsi
    movq %r12 , %rdx 
    call	__printf_chk@PLT
    xorq %rax,%rax
    cmpq %rbx , %rax
    jne LOOP


    addq $8 ,%rsp
    ret


LOOP:
    decq %rbx
    addq $2 ,%r12
    jmp START


