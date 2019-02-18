#include <stdio.h>
#include<math.h>
int main()
{
    
    char a[60];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
    if(a[i]!='a'&& a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
