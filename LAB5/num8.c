#include <stdio.h>
#define N 5

int main(){
    int Matrix[N][N];
    int counter = 0;
    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N; ++j)
        {
            Matrix[i][j] = counter++;
        }
        
    }

    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N; ++j)
        {
            printf("%d\t",Matrix[i][j]);
        }
        puts("");
        
    }
    
}