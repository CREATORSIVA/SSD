
#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i,len=0;
    char a[30];
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=0 || a[i]<=9)
        {
            len++;
        }
        
     
     
    }
    printf("%d",len);
    

    return 0;
}
