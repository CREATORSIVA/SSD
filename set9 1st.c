#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c<0)
    {
        printf("%d",c*-1);
    }
    else
    {
        printf("%d",c);
    }
    

    return 0;
}

