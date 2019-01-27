#include <stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char a[30];
    scanf("%s",a);
    scanf("%d",k);
    for(i=0;i<k;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}
