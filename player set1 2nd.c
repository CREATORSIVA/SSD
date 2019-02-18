#include <stdio.h>

int main()
{
  int a[40],b[30],j=0;
   int n,k,temp=0,i;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

    for(i=n;i>0;i--)
    {
       b[j]=a[i-k];
       k--;
       j++;
    }
for(i=0;i<k;i++)
{
printf("%d ",b[i]);
}
return 0;
}
