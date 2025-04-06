#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

#define STR(v) #v
#define PRINT_SIZE(value) printf("Тип %s занимает %lu байт памяти\n", STR(value) , sizeof(value))

int main(){

    puts("ОС - LINUX , разрядность - 64\n");
    system("gcc -v");
    system("lscpu");
    puts("\nx86_64 , система общего назначения");

    puts("\n\n");

    PRINT_SIZE(char);
    PRINT_SIZE(char*);
    PRINT_SIZE(bool);
    PRINT_SIZE(wchar_t);
    PRINT_SIZE(short);
    PRINT_SIZE(unsigned short);
    PRINT_SIZE(int);
    PRINT_SIZE(long);
    PRINT_SIZE(long long);
    PRINT_SIZE(float);
    PRINT_SIZE(double);
    PRINT_SIZE(double *);
    PRINT_SIZE(long double);
    PRINT_SIZE(size_t);
    PRINT_SIZE(ptrdiff_t);
    PRINT_SIZE(void*);


}