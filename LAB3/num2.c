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
    int Ml[5] = {1,-1,2,3,4};
    PrintArr(Ml,sizeof(Ml));
    size_t i = 3;



    asm(
        "movl $0,(%[M],%[I],4)\n\t"
        :
        :[M]"rax"(Ml),[I]"rdx"(i)
        :"memory"


    );
    PrintArr(Ml,sizeof(Ml));

}