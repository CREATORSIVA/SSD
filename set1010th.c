
#include <stdio.h>
 
int main()
{
    int n,rem=0,ap=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        ap=ap*rem;
        n=n/10;
    }
    
 
    return 0;
}
