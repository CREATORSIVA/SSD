#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50];
int i,l,l1;
scanf("%s",&a);
l=strlen(a);
for(i=0;a[i]!='\0';i++)
{ 
 if(a[i]!=" ")
 {
 l1++;
 }
 }
 printf("%d",l1);
 getch();
 }
 
