#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a>>31)&1)
    printf("entered  value is -ve");
    else
    printf("entered  value is +ve");
}