void main()
{
int i,n,rem=0,sum=0;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
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
printf("yes");
}
else
{
pritnf("no");
}
getch();
}

