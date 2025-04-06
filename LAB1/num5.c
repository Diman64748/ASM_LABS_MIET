#include <stdio.h>
#include <stdlib.h>

#define N 5
#define R 2

int main(){
    unsigned int Ml[N] = {0 , 2 , 4 , 6 , 8};

    printf("Адрес начала массива %p\n",Ml);
    printf("Адрес нулевого элемента %p\n",&Ml[0]);
    printf("Адрес второго элемента %p\n",&Ml[1]);
    printf("Размер массива в байтах %ld\n\n" , sizeof(Ml));

    unsigned int MM[R][N];
    printf("Адрес элемента MM[0][0] %p\n" , &MM[0][0]);
    printf("Адрес элемента MM[0][1] %p\n" , &MM[0][1]);
    printf("Адрес элемента MM[1][0] %p\n" , &MM[1][0]);
    printf("Адрес элемента MM[1][1] %p\n" , &MM[1][1]);
    printf("Выделили памяти: %ld\n\n",sizeof(MM));

    int* M = malloc(R * N * sizeof(int));

    // (i*N + j)   i < 2 ;j < 5
    //Память - указатель + размер массива старого

    printf("Адрес элемента M[0][0] %p\n" , &M[0*N + 0]);
    printf("Адрес элемента M[0][1] %p\n" , &M[0*N + 1]);
    printf("Адрес элемента M[1][0] %p\n" , &M[1*N + 0]);
    printf("Адрес элемента M[1][1] %p\n\n" , &M[1*N + 1]);

    printf("Затраты на память: %ld + %ld" , sizeof(M), R*N*sizeof(int));




    //Освободили память
    free(M);





}