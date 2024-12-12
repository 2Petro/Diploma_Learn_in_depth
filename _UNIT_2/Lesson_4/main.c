#include <stdio.h>

int main() {
    int i=2;
    for(printf("1st\n");i<=5 && printf("2nd\n");i++ && printf("3rd\n"))
    {
        printf("4th\n");
    }
    unsigned int a= -1;
    int b = a  ;
    if (a==b){printf("th\n");}
    int d = 0;
     1 || ++d;
    printf("%d\n",d);
    signed int w= 4294967295;
    unsigned int h = 0;
    if (--h == -1){printf("val %d \n",w);}


    unsigned short us = 65535;
    printf("Using %%d: %d\n", us);
    printf("Using %%u: %u\n", us);
    return 0;
    return 0;
}
