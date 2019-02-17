#include <stdio.h>

int main()
{
    char a[50];
    int i,j,temp=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[0]>='a' || a[0]<='z')
    {
        a[0]=a[0]-32;
    }
    if(a[i]==' ')
    {
        a[i+1]=a[i+1]-32;
    }
    }
    
printf("%s",a);
    return 0;
}
