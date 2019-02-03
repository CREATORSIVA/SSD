#include <stdio.h>

int main()
{
 int n,i,flag=0;
 scanf("%d",&n);
 if(n<10000)
 {
 while(n>0)
 {
     n++;
     if(n%10==0)
     {
         printf("%d",n);
         break;
     }
 }
 }
 else
 {
     printf("invalid ip");
 }
     return 0;
}
