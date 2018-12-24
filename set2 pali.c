void amin()
{
int n,rem=0,temp=0,rev=0;
scanf("%d",n);
temp=n;
while(n>0)
{
rem=n%10;
rev=rev%10+rem;
n=n/10;
}
if(rev==temp)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
getch();
}
