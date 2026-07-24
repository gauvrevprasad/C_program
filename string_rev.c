#include<stdio.h>
#include<string.h>
int stringrev(char* a,int len)
{
    int i =0;
    int j=len-1;
   while(i<j)
   {
    a[i]=a[i]^a[j];
    a[j]=a[i]^a[j];
    a[i]=a[i]^a[j];
    i++;
    j--;
   }
   while(a[i]!=' ')
   return 0;
}







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
