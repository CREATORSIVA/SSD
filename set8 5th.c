#include <stdio.h>

int main()
{
    int i,j,len=0,d=0;
    char a[50];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
        }
        d=len/2;
    if(len%2==0)
    {
        a[d-1]='*';
        a[d]='*';
    }
     printf("%s",a);   
    return 0;
}
