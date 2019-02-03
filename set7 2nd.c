
#include <stdio.h>
#include<string.h>

int main()
{
    int n,i,l=0,len=0;
    char a[50];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1'|| a[i]=='0')
        {
            len++;
        }
    }
    if(l==len)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}
