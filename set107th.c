#include <stdio.h>
 
int main()
{
    int a,rem=0,n,ap=0;
    scanf("%d",&a);
    if(n<1000)
    {
    while(a>0)
    {
        rem=a%10;
       printf("%d",rem);
       a=a/10;
    }
    }
    else
    {
    printf("invalid");
    }
 
    return 0;
}
      
