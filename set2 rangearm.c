void main()
{
scanf("%d",a);
scanf("%d",b);
for(i=a;i<=b;i++)
{
a++;
t=a;
temp=a;
while(a>0)
{
a=a/10;
c++;
}
while(t>0)
{
rem=t%10;
sum=sum+pow(rem,c);
t=t/10;
}
if(sum==temp)
{
printf("yes %d",temp);
}
else
{
printf("no%d",temp);
}
sum=0;rem=0;
}
getch();
}

