#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0,k=0;
    char a[20];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'||a[i]<='z'))
        {
            j++;
        }
    else((a[i]>=0) || (a[i]<=9))
        {
        
        k++;
        }
    }
    if((l>1 && (k>1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}
