
#include <stdio.h>

int main()
{
     int len[10],i,max=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&len[i]);
    }
    max=len[0];
    for(i=0;i<10;i++)
    {
        if(max<len[i])
        max=len[i];
        
    }
    printf("%d",max);

    return 0;
}
