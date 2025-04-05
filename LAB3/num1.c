#include <stdio.h>
#define SIZE 5
void PrintArr(void *ptr , size_t sz ){
    char* arr = (char*)ptr;
    for (size_t i = 0; i < sz; ++i)
    {
        printf("%02hhx ",arr[i]);
    }
    printf("\n");
    
}

int main(){
    short Ms[SIZE] = {1,2,3,4,5};
    int Ml[SIZE] = {1,-3,7,-8,2};
    long long Mq[SIZE] = {-5,0,-3,4,5};
    puts("Ситуация до вставки");
    PrintArr(Ms,sizeof(Ms) );
    PrintArr(Ml,sizeof(Ml) );
    PrintArr(Mq,sizeof(Mq));

    asm(
        "movw $18 , (%%rax)\n\t"
        "add $2 , %%rax\n\t"
        "movw $18 , (%%rax)\n\t"
        "add $2 , %%rax\n\t"
        "movw $18 , (%%rax)\n\t"
        :
        :"rax"(Ms)
        :

    );
    puts("Ситуация после вставки");
    PrintArr(Ms,sizeof(Ms) );

    asm(
        "movl $18 , (%%rax)\n\t"
        "add $4 , %%rax\n\t"
        "movl $18 , (%%rax)\n\t"
        "add $4 , %%rax\n\t"
        "movl $18 , (%%rax)\n\t"
        :
        :"rax"(Ml)
        :

    );
    PrintArr(Ml,sizeof(Ml) );

    asm(
        "movq $18 , (%%rax)\n\t"
        "add $8 , %%rax\n\t"
        "movq $18 , (%%rax)\n\t"
        "add $8 , %%rax\n\t"
        "movq $18 , (%%rax)\n\t"
        :
        :"rax"(Mq)
        :

    );
    PrintArr(Mq,sizeof(Mq));

    
}