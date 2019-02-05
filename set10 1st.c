#include <stdio.h>

int main()
{
     
     int a,b,c,area=0,surface=0;
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     surface=2*((a*b)+(b*c)+(c*a));
     area=a*b*c;
     printf("%d %d",surface,area);
       return 0;
}
