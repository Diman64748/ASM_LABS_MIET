#include <stdio.h>
void PrintArr(void *ptr , size_t sz ){
    char* arr = (char*)ptr;
    for (size_t i = 0; i < sz; ++i)
    {
        printf("%02hhx ",arr[i]);
    }
    printf("\n");
    
}


int main(){

    long long Mq[5] = {1,1,1,1,1};
    volatile long long x = 0x89;
    size_t i = 0;
    PrintArr(Mq,sizeof(Mq));
    asm(
        "movq (%[X]),%%rcx\n\t"
        "movq %%rcx , (%[M],%[I],8)\n\t"
        :
        :[M]"rax"(Mq),[I]"rdx"(i),[X]"r"(&x)
        :"memory","%rcx"

    );
    PrintArr(Mq,sizeof(Mq));


}