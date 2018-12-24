void main()
{
int n;
scanf("%d",&n);
t=n;
temp=n;
while(n>0)
{
n=n/10;
c++;
}
while(t>0)
{
rem=n%10;
sum=sum+pow(rem,c);
t=t/10;
}
if(sum==temp)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
