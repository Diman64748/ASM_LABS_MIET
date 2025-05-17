
.data
num1: .float 5.0
num2: .float -3.0

.text
.globl main

main:
    movsd num1, %xmm0     
    movsd num2, %xmm1
    cmpltss %xmm0,%xmm1
    movq %xmm1 , %rax
    ret
    