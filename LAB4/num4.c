#include <stdio.h>


int main(){


    short i16;
    int i32;
    long i64;
    float f32;
    double f64;

    scanf("%hd %d %ld %f %lf", &i16 , &i32 , &i64 , &f32 , &f64);

    printf("%hd %d %ld %.2f %.2f", i16, i32, i64, f32, f64);
}