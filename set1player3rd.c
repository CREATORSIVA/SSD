#include <stdio.h>

int main()
{
 int rev=0,rem=0,pow=10,n;
 scanf("%d",&n);
 while(n>0)
 {
     rem=n%10;
     rev=rev*pow+rem;
     n=n/10;
 }
printf("%d",rev);
    return 0;
}
