    .text
    .globl main

main:
    movq $0,%rdx
    movq $2 ,%rdi
    movq $0 ,%rsi
    movq $-2, %rax

    addq %rdx,%rax 
    leaq -2(%rdx ,%rdi),%rdi
    cmpq %rdi,%rsi
    movq $25,%rdx
    cmovae  %rax,%rax
    cmovb   %rdx,%rax
    ret
    