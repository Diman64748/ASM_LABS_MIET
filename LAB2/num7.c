#include <stdio.h>

void print64(void *p){
    long long *x = (long long *)p;
    double *fx = (double*)p;

    printf("%016llX ",*x);
    printf("%064llb\n",*x);
    printf("%43llu ",*x);
    printf("%+20lld\n",*x);

    printf("%+22.2A",*fx);
    printf("%+21.2e",*fx);
    printf("%+21.2f\n",*fx);

}
int main(){
    long long x = 13;
    long long y = 0x8000000000000000;
    print64(&x);
    print64(&y);
    
}