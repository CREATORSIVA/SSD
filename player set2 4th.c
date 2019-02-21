#include <stdio.h>
#include<math.h>
int main()
{
    
    char a[60],b[80];
    int n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
    if(a[i]!='a'&& a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
        {
            b[j]=a[i];
        j++;
        }
    }
    for(i=j;i>=0;i--)
    {
        printf("%c",b[i]);
    }
