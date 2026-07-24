#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int len;
    scanf("%29[^\n]",a);
    len=strlen(a);
    printf("%d\n",len);
    stringrev(a,len);
    printf("%s",a);
    return 0;
}
