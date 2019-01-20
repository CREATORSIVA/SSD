#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[40];
int i,l,lines=1;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
lines++;
}
}
printf("%d",lines);
getch();
}



