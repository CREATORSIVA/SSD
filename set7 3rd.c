#include<stdio.h>
#include<conio.h>
void main()
{
    int n=10,i,min=0,a[10],t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            t=min;
            min=a[i];
            a[i]=min;
            
        }
    }
    printf("%d",min);
    return 0;
}
