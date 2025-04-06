#include <stdio.h>

void print16(void *p){
    short* x = (short*)p;
    printf("%04hX ",*x);
    printf("%016hb ",*x);
    printf("%6hu",*x);
    printf("%7hd\n",*x);


}

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
void c16to32(void *p){
    short *x = (short*)p;
    unsigned short *ux = (unsigned short*)p;
    print16(x);
    int ix = *x;
    unsigned uix = *ux;
    print32(&ix);
    print32(&uix);

}


int main(){
    int m = 21;
    int n = -37;
    c16to32(&m);
    c16to32(&n);

}