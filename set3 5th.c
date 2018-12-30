void main()
{
int n,i,j,temp,a[10],d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j]<a[i])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
d=n/2;
if(n%2==0)
{
d=d-1;
}
printf("%d",a[d]);
getch();
}
