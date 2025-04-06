#include <stdio.h>

void printDump(void *p, size_t N ){
    char *p1 = (char*)p;
    for (size_t i = 0; i < N; ++i)
    {
        printf("%02hhX ", *(p1 + i));
    }
    
}

int main(){
    int x1 = 5, y = -5, a = 1, b = 2;
    double x2 = 5;
    int c = 12345689, d = 123456891;

    char str1[] = "abcdef";
    char str2[] = "абвгде";
    
    puts("x1 = 5(int)");
    printDump(&x1,sizeof(int));
    
    puts("\n\nx2 = 5(double)");
    printDump(&x2,sizeof(double));
    
    puts("\n\nchar[] = \"abcdef\" (sizeof = 7)(ноль терминатор + 6)");
    printDump(str1,sizeof(str1));
    
    puts("\n\nchar[] = \"абвгде\" (sizeof = 13)(в кодировке utf8 каждый русский символ кодируется 2 байтами => 6*2 + 1(ноль терминатор))");
    printDump(str2,sizeof(str2));
    
    puts("\n\nint[] = \"abcdef\" (sizeof = 7*4) с суффиксом L каждый символ кодируется 4 байтами");
    int Wstr[] = L"abcdef";
    printDump(Wstr,sizeof(Wstr));
    
    puts("\n\nint[] = \"абвгде\"");
    int Wstr_ru[] = L"абвгде";
    printDump(Wstr_ru,sizeof(Wstr_ru));
    puts("");
    




}