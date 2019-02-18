#include <stdio.h>
#include<math.h>
int main()
{
    
    int n,rem=0,sum=0,c=0;
    scanf("%d",&n);
    c=n;
    while(c>0)
    {
        rem=c%10;
        sum=sum+(rem*rem);
        c=c/10;
    }
    printf("%d",sum);

    return 0;
}
