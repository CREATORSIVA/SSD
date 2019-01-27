#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[40],k=0,c=0,i;
scanf("%d",&n);
 scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
if(a[i]==k)
{
c++;
}
}
printf("%d",c);
return 0;
}
