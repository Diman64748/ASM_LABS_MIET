#include <stdio.h>
#include <limits.h>

int main(){
    printf("Max 8  bit %02hhx\t Min 8 bit %02hhx\n",CHAR_MAX , CHAR_MIN);
    printf("Max 16 bit %04hx\t Min 16 bit %04hx\n",SHRT_MAX , SHRT_MIN);
    printf("Max 32 bit %08x\t Min 32 bit %08x\n",INT_MAX , INT_MIN);
    printf("Max 64 bit %016lx\t Min 64 bit %016lx\n",LONG_MAX , LONG_MIN);
    printf("Max float %f Min float %f\n",__FLT_MAX__ ,  __FLT_MIN__);
    printf("Max double %f Min double %f\n",__DBL_MAX__ ,  __DBL_MIN__);
    


}