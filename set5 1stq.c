
#include <stdio.h>

#include<string.h>

int main()
{
    int i=0,len=0;
    char a[20];
    scanf("%s",&a);
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        printf("\n%s",a);
    }

    return 0;
}
