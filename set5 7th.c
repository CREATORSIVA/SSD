#include <stdio.h>

int main()
{
      int i,a,b=0,ar[50],max=0,min=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       scanf("%d",&ar[i]);
      
    }
    min=ar[0];
    max=ar[0];
    for(i=0;i<a;i++)
    {
        if(max<ar[i])
        max=ar[i];
    }
     for(i=0;i<a;i++)
    {
        if(min>ar[i])
        min=ar[i];
    }
    printf("%d %d",min,max);
    return 0;

    
}
