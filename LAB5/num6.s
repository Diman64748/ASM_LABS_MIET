.text
.globl main


main:
    movq $8,%rdx #;размер массива
    movq $4 ,%rax 
    movq $0 ,%rsi

    mulq %rdx
    subq $48,%rsp
    movq $1, (%rsp)
    movq $8,%rdx

    movq %rsp, %rbp
    movq $1 ,%rax

START:

    cmpq %rdx, %rsi
    movq %rax,(%rbp) 
    jne LOOP
    je END 

LOOP:
    addq $4 , %rbp
    addq $2, %rax
    decq %rdx
    jmp START


END:
    movq %rsp , %rdi
    movq $8 , %rsi
    call Print
    addq $48 , %rsp

    ret
