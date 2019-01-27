#include <stdio.h>

int main()
{
int n,a[40],k=0,c=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
c++;
}
}
if(c>0)
{
printf("yes");
}return 0;
}


