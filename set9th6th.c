
#include <stdio.h>

int main()
{char a[50];
int i,j,c=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
    for(j=i+1;a[j]!='\0';j++)
    {
     if(a[i]==a[j])
     { c++;
     }
    }
}
if(c>0)
{
    printf("no");
}
else
{
    printf("yes");
}
    return 0;
}
