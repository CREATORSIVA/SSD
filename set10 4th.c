
#include <stdio.h>

int main()
{
     
     int a,b[40],n,k=0,i;
     scanf("%d",&a);
     scanf("%d",&k);
     for(i=0;i<a;i++)
     {
         scanf("%d",&b[i]);
     }
     printf("%d",b[k-1]);
       return 0;
}
