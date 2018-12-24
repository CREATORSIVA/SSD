void main()
{
int a,i,b;
scanf("%d",&a);
scanf("%d",&b);
a=a+1;
for(i=a;i<b;i++)
{
if(i%2==1)
{
printf("%d",i);
}
else
{
printf("no odd numbers");
}
}
getch();
}
