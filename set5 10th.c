#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s=0;
scanf("%d",j);
for(i=1;i<=j;i++)
{
s=i*i;
break;
}
if(s==j)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
