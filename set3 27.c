#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50];
int i,l=0,l1=0;
scanf("%s",a);
l=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=0 && a[i]<=9 )
{
l1++;
}
}
if(l=l1)
{
pritnf("yes");
}
else
{
printf("no");
}
getch();
}
