    .text
    .globl main

main:
    movq $0x7fffffffffffffff,%rdx
    movq $2,%rdi
    addq %rdi,%rdx
    seto %al
    ret
