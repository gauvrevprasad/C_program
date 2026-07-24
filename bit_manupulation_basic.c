#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n",a|(1<<2));
    printf("%d\n",a&~(1<<1));
    printf("%d",a^(1<<1));
}