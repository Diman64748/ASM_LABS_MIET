#include <stdio.h>
void PrintArr(float *ptr , size_t sz , const char *format){

    for (size_t i = 0; i < sz; ++i)
    {
        printf(format,ptr[i]);
    }
    printf("\n");
    
}


int main(){

    float Mfs[2] = {1.2,1.3};
    volatile int x = 3;
    size_t i = 1;
    PrintArr(Mfs,2,"%.2f ");
    asm(
        "cvtsi2ss %[X],%%xmm2\n\t"
        "vmovd %%xmm2 , (%[M],%[I],4)\n\t"
        :
        :[M]"r"(Mfs),[I]"r"(i),[X]"r"(x)
        :"memory","%xmm2"

    );
    PrintArr(Mfs,2,"%.2f ");


}