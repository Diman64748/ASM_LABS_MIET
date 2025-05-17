    .text
    .globl main

main:
    movq $-3,%rdx
    movq $-4,%rdi
    cmpq %rdx,%rdi
    setg %al
    ret
    