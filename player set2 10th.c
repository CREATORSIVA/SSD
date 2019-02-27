
#include <stdio.h>

int main()
{
    
    int n,i;
    char a[40];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    
    if(a[i]=='z')
    
        a[i]='c';
       else if(a[i]=='y')
           a[i]='b';
           else if(a[i]=='x')
           a[i]='a';
           else
           
               a[i]=a[i]+3;
    }
    printf("%s",a);

    return 0;
}
