#include <stdio.h>
#include<string.h>

int main()
{
 char a[50],b[80];
 int l=0,i;
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'|| a[i]=='o'||a[i]=='u')
     {
         l++;
     }
 }
 if(l>0)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
 
 
     return 0;
}
