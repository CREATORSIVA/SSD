#include <stdio.h>
#include <string.h>

int main()
{
    int n,len=0,i;
    char s[50];
    scanf("%s",s);
    scanf("%d",&n);
    len=strlen(s);
    for(i=len-1;i>n-1;i--)
    {
        printf("%c",s[i]);
    }
    

    return 0;
}
