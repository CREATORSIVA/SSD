#include <stdio.h>

int main()
{
    char a[50];
    int i,j,temp=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("%s",a);
    

    return 0;
}
