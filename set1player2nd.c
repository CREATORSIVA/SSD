#include <stdio.h>

int main()
{
    int n,i,fact=1;
    scanf("%d",&n);
    if(n<=20)
    {
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
printf("%d",fact);
}
else
{
    printf("invalid");
}

    return 0;
}
