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
    size_t i = 1;
    PrintArr(Mq,sizeof(Mq));
    asm(
        "movb $0x55 , 4(%[M],%[I],8)"
        :
        :[M]"rax"(Mq),[I]"rdx"(i)
        :"memory"
    );
    PrintArr(Mq,sizeof(Mq));
}