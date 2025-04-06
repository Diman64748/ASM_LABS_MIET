#include <stdio.h>


#define N 5

#define PRINT_ARRAY(arr , format)\
for (size_t i = 0; i < N; i++)\
{\
    printf(format ,arr[i]);\
}

int main(){
    unsigned char  Mb[N] = {'M' , 'I' , 'E' , 'T','('};
    puts("Массив до изменений:");
    PRINT_ARRAY(Mb , "%c");
    puts("");
    int res = scanf("%c %c %c %c %c",&Mb[0] ,&Mb[1],&Mb[2],&Mb[3],&Mb[4]);
    printf("Введено корректно символов: %d; Не получилось ввести: %d\n\n" , res , N - res);
    puts("Массив после изменений:");
    PRINT_ARRAY(Mb , "%c");
    
    
}