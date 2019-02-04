
#include <stdio.h>

int main()
{
    int n,a[50],rem=0,j=0,i;
    scanf("%d",&n);
    if(n<100000)
    {
    while(n>0)
    {
        rem=n%10;
        if(rem%2==1)
        {
            a[j]=rem;
            j++;
        }
        n=n/10;
        rem=0;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    }
    else
    {
    printf("invalid");
    }

    return 0;
}
