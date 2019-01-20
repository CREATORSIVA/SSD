
#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i,l;
    char a[30];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=0 || a[i]<=9)&&(a[i]>='a' ||a[i]<='z')&&(a[i]>='A'||a[i]<='Z'))
        {
            l++;
        }
        else
        {
            printf("%c",a[i]);
        }
     
     
    }
    return o;
    }
