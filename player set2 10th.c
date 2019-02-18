#include <stdio.h>

int main()
{
    
    int n,i;
    char a[40];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    a[i]=a[i]+3;
    printf("%c",a[i]);
    }

    return 0;
}

