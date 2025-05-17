
.globl main


.data 
message: .string "ПМ-32 , 2 , Яшкин Колобовников Токарев"


.text

main:
    subq $8,%rsp
    leaq message(%rip) , %rdi
    movl $0 , %eax
    call puts@PLT
    movl $0 , %eax
    addq $8 ,%rsp
    ret


