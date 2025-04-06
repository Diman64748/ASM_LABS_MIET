#include <stdio.h>
#include <limits.h>

void print16(void *p){
    short* x = (short*)p;
    printf("%04hX ",*x);
    printf("%016hb ",*x);
    printf("%6hu",*x);
    printf("%7hd\n",*x);


}

int main(){
    short y = 13;
    short x = 0x8000;

    short x1 = 5 , y1 = -5 , a = 1 , b = 2; 
    short max_u = USHRT_MAX, min_u = 0;
    short max_s = SHRT_MAX , min_s = SHRT_MIN;

    print16(&y);
    print16(&x);
    puts("\nИсследуем\n");
    print16(&max_u);
    print16(&min_u);
    print16(&max_s);
    print16(&min_s);
    puts("\nЧисла x y a b\n");
    print16(&x1);
    print16(&y1);
    print16(&a);
    print16(&b);



    
}