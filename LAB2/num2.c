#include <stdio.h>


void viewPointer(void* p){
    char* p1 = (char*)p;
    unsigned short *p2 = (unsigned short *)p;
    double *p3 = (double*)p;
    printf("p  = %p\n",p);
    printf("p1 = %p\n",p1);
    printf("p2 = %p\n",p2);
    printf("p3 = %p\n\n",p3);


    printf("p1 + 1 = %p\n",p1 + 1);
    printf("p2 + 1 = %p\n",p2 + 1);
    printf("p3 + 1 = %p\n\n",p3 + 1);

    printf("Разница в байтах p1 + 1 - p1 = %ld\n",(char*)(p1 + 1) - (char*)p1);
    printf("Разница в байтах p2 + 1 - p2 = %ld\n",(char*)(p2 + 1) - (char*)p2);
    printf("Разница в байтах p3 + 1 - p3 = %ld\n\n",(char*)(p3 + 1) - (char*)p3);
}


void printPointer(void *p){
    char* p1 = (char*)p;
    unsigned short *p2 = (unsigned short *)p;
    double *p3 = (double*)p;

    
    printf("Значение под p1 = %hhx\n",*p1);
    printf("Значение под p2 = %hx\n",*p2);
    printf("Значение под p3 = %lx\n\n",*p3);


    printf("Значение под p1 + 1 = %hhx\n",*(p1 + 1));
    printf("Значение под p2 + 1 = %hx\n",*(p2 + 1));
    printf("Значение под p3 + 1 = %lx\n\n",*(p3 + 1));

}

int main(){
    long a = 0x34;
    long * p = &a;

    char str[] =  "0123456789abcdef";
    viewPointer(p);
    printPointer(p);
    //Вторая штукаg ggg

    viewPointer(str);
    printPointer(str);

}