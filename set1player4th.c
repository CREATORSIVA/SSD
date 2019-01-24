#include <stdio.h>

int main()
{
     int i,l=0;
     char a[50];
     scanf("%s",&a);
     for(i=0;a[i]!='\0';i++)
     {
         l++;
     }
     a[l]='.';
     for(i=0;i<=l;i++)
     {
         printf("%c",a[i]);
     }
    return 0;
}
