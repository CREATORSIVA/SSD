#include <stdio.h>

int main()
{
    int hr1,min1,hr2,min2,hr,min;
    scanf("%d",&min1);
    if(min1>0)
    {
        hr2=min1/60;
        min2=min1%60;
    }
    printf("%d,%d",hr2,min2);
    return 0;
}
