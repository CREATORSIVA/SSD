#include <stdio.h>

int main()
{
    
 int a,b,i,f=0,s=0;
 scanf("%d%d",&a,&b);
 f=a*b;
 for(i=1;i<=f;i++)
 {
    if(i*i==s) 
    {
        f++;
    }
 }
 if(f==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
 

    return 0;
}
