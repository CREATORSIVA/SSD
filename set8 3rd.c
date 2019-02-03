
#include <stdio.h>

int main()
{
    int n,a,b,i,f=0;
    scanf("%d",&n);
    scanf("\n%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(n==i)
        {
            f++;
        }
    }
    if(f>0)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }

    return 0;
}
