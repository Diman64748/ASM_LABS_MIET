#include <stdio.h>
int main(){

    short x = 5 ,y = 10;
    short z , w;
    printf("x = %d\ty = %d\n",x , y);

    asm(
        "subw %[Y],%[X]\n\t"
        "movw %[X],%[W]\n\t"

        "addw %[Y],%[X]\n\t"
        "addw %[Y],%[X]\n\t"
        "movw %[X],%[Z]\n\t"
        :[Z]"=&r"(z),[W]"=&r"(w)
        :[X]"r"(x),[Y]"r"(y)
        :

    );
    printf("z = %d\tw = %d\n",z , w);




}