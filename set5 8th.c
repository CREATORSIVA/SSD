#include <stdio.h>

int main()
{
      int i,a,b=0,ar[50];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       scanf("%d",&ar[i]);
       b=ar[i]+b;
    }
    printf("%d",b);
    return 0;

    
}
