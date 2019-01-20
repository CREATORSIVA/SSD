
#include <stdio.h>

int main()
{
    int i,j;
    char a[10],b[10],l,len1,len2;
    gets(a);
    gets(b);
    l=strlen(a);
    len1=strlen(b);
    len2=l+len1+1;
    printf("%s%s",a,b);

    return 0;
}
