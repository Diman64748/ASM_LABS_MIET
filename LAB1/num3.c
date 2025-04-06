#include <stdio.h>


#define N 5

#define PRINT_ARRAY(arr , format)\
for (size_t i = 0; i < N; i++)\
{\
    printf(format ,arr[i]);\
}


int main(){
    unsigned char Mb[N] = {0xED , 0xED , 0xED , 0xED ,0xED};
    unsigned short Ms[N] = {0xFADE , 0xFADE , 0xFADE , 0xFADE , 0xFADE};
    unsigned int Ml[N] = {0xADE1A1DA , 0xADE1A1DA , 0xADE1A1DA , 0xADE1A1DA , 0xADE1A1DA};
    unsigned long long Mq[N] = {0xC1A551F1AB1E , 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E};
    float Mfs[N] = {-(float)2/(float)7,-(float)2/(float)7,-(float)2/(float)7,-(float)2/(float)7,-(float)2/(float)7 };
    double Mfl[N] = {-(double)2/(double)7,-(double)2/(double)7,-(double)2/(double)7,-(double)2/(double)7,-(double)2/(double)7};

    //ПЕРВЫЙ
    puts("Первый массив чаров:");
    PRINT_ARRAY(Mb,"%hhX ");
    puts("");
    PRINT_ARRAY(Mb,"%hhb ");
    puts("");
    PRINT_ARRAY(Mb,"%hhu ");
    puts("");
    PRINT_ARRAY(Mb,"%+hhd ");
    puts("\n");

    //ВТОРОЙ
    puts("Второй массив шортов:");
    PRINT_ARRAY(Ms,"%hX ");
    puts("");
    PRINT_ARRAY(Ms,"%hb ");
    puts("");
    PRINT_ARRAY(Ms,"%hu ");
    puts("");
    PRINT_ARRAY(Ms,"%+hd ");
    puts("\n");

    //ТРЕТИЙ
    puts("Третий массив интов:");
    PRINT_ARRAY(Ml,"%X ");
    puts("");
    PRINT_ARRAY(Ml,"%b ");
    puts("");
    PRINT_ARRAY(Ml,"%u ");
    puts("");
    PRINT_ARRAY(Ml,"%+d ");
    puts("\n");

    //ЧЕТВЕРТЫЙ
    puts("Четвертый массив лонгов:");
    PRINT_ARRAY(Mq,"%llX ");
    puts("");
    PRINT_ARRAY(Mq,"%llb ");
    puts("");
    PRINT_ARRAY(Mq,"%llu ");
    puts("");
    PRINT_ARRAY(Mq,"%+lld ");
    puts("\n");

    //ПЯТЫЙ
    puts("Пятый массив флоатов:");
    PRINT_ARRAY(Mfs,"%A ");
    puts("");
    PRINT_ARRAY(Mfs,"%e ");
    puts("");
    PRINT_ARRAY(Mfs,"%f ");
    puts("\n");

    //ШЕСТОЙ
    puts("Шестой массив даблов:");
    PRINT_ARRAY(Mfl,"%lA ");
    puts("");
    PRINT_ARRAY(Mfl,"%le ");
    puts("");
    PRINT_ARRAY(Mfl,"%lF ");
    puts("\n");


    //Массив чаров через с
    puts("Массив чаров еще раз:");
    PRINT_ARRAY(Mb,"%c ");
    puts("\n");

    //Поставить ширину 
    puts("Ставлю ширину");
    PRINT_ARRAY(Mfs,"%10.3f ");
    puts("\n");

    //Поставлю минус
    puts("Ставлю минус");
    PRINT_ARRAY(Mfs,"%-10.3f ");
    puts("\n");

    //Дополняем ведущими нулями 
    puts("Дополним ведущими нулями(шестнадцатиричная система)");
    PRINT_ARRAY(Mq,"%016llX ");
    puts("\n");

    puts("Дополним ведущими нулями(двоичная система)");
    PRINT_ARRAY(Mq,"%064llb ");
    puts("\n");

    //Усилим точность до двух цифр после запятой
    puts("Усилим точность до 2 знаков после запятой:");
    PRINT_ARRAY(Mfs,"%.2A ");
    puts("");
    PRINT_ARRAY(Mfs,"%.2e ");
    puts("");
    PRINT_ARRAY(Mfs,"%.2f ");
    puts("\n");




    



}