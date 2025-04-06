#include <stdio.h>

void print16(void *p){
    short* x = (short*)p;
    printf("%04hX ",*x);
    printf("%016hb ",*x);
    printf("%6hu",*x);
    printf("%7hd\n",*x);


}



void ab16(void *p){
    short x = *(short*)p;
    unsigned short ux = *(unsigned short*)p;
    short tmp_shrt;
    unsigned short tmp_ushrt;
    printf("Исходное значение\n  \t");
    print16(&x);

    printf("a1\t");
    tmp_ushrt = ux * 2;
    print16(&tmp_ushrt);

    printf("a2\t");
    tmp_shrt = x * 2;
    print16(&tmp_shrt);

    printf("a3\t");
    tmp_ushrt = ux / 2;
    print16(&tmp_ushrt);

    printf("a4\t");
    tmp_shrt = x / 2;
    print16(&tmp_shrt);

    printf("a5\t");
    tmp_ushrt = ux % 16;
    print16(&tmp_ushrt);

    printf("a6\t");
    tmp_ushrt = ux & 0xfff0;
    print16(&tmp_ushrt);

    printf("b1\t");
    tmp_ushrt = ux << 1;
    print16(&tmp_ushrt);

    printf("b2\t");
    tmp_shrt = x << 1;
    print16(&tmp_shrt);

    printf("b3\t");
    tmp_ushrt = ux >> 1;
    print16(&tmp_ushrt);

    printf("b4\t");
    tmp_shrt = x >> 1;
    print16(&tmp_shrt);

    printf("b5\t");
    tmp_shrt = x & 15;
    print16(&tmp_shrt);

    printf("b6\t");
    tmp_shrt = x & -16;
    print16(&tmp_shrt);
    
}

int main(){
    int m = 21;
    int n = -37;
    ab16(&m);
    ab16(&n);

}