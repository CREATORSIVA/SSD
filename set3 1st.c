void main()
{
int n,i,j,sum=0,a,d;
scanf("%d",&a);
scanf("%d",&d);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a+n*d;
sum=a+sum;
}
printf("%d",sum);
getch();
}
