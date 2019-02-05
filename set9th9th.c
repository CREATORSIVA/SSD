
#include <stdio.h>

int main()
{
     char a[50];
    int i,t,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=1+1;a[j]!='\0';j++)
        {
            if(a[j]<a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
        for(i=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
        }
    

    return 0;
}
