#include<stdio.h>
#include<conio.h>
void main()
{
    int hr1,min1,hr2,min2,hr,min;
    printf("hr1 and min1");
    scanf("%d,%d",&hr1,&min1);
    printf("hr2 and min2");
    scanf("%d,%d",&hr2,&min2);
    hr=hr1-hr2;
    min=min1-min2;
    printf("%d,%d",hr,min);    
    return 0;
}
