
#include <stdio.h>

int main()
{
int n,k=0,c=0,i;
scanf("%d",&n);
while(n>0)
{
    k=n%10;
    c++;
    n=n/10;
}
printf("%d",c);
return 0;
}

