void main()
{
int a,b,i,n,flag=0;
scanf("%d",&a);
scanf("%d",&b);
a=a+1;
for(i=a;i<b;i++)
{
for(j=2;j<i/2;j++)
{
if(i%j==0)
{
flag=1;
}
else
{
flag=0;
}
}
if(flag==1)
{
prinf("%d",i);
}
}
getch();
}
