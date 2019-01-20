#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i,len=0,len1=0;
    char a[30];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=0 || a[i]<=9)||(a[i]>='a' ||a[i]<='z')||(a[i]>='A'||a[i]<='Z'))
        {
        len1++;
        }
        else
        {
        len++;
        }
     
     
    }
    printf("%d",len);

    

    return 0;
}
