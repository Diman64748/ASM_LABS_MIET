    .text
    .globl main

main:
    movq $-3,%rdx
    movq $2,%rdi
    cmpq %rdx,%rdi
    seta %al
    ret
    
