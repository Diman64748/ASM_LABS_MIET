#include <stdio.h>

void print32(void *p){
    int *x = (int*)p;
    float *fx = (float*)p;

    printf("%08X ",*x);
    printf("%032b",*x);
    printf("%11u ",*x);
    printf("%+12d",*x);

    printf("%+16.2A",*fx);
    printf("%+13.2e",*fx);
    printf("%+13.2f\n",*fx);

}
int main(){
    int x = 13;
    int y = 0x80000000;
    print32(&x);
    print32(&y);
    
}