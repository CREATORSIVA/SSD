#include <stdio.h>

int main()
{
int n,k=0,i;
scanf("%d",&n);
    if(n<100000)
    {
for(i=1;i<=n;i++)
{
    k=k+i;
}
printf("%d",k);
    }
    else
    {
        printf("invalid ip");
    }
return 0;
}
