void main()
{
int n,a[30],i,j,temp=0;
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
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}
