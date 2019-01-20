#include <stdio.h>

int main()
{
       int i,l=0,rem=0;
      scanf("%d",&i);
      while(i>0)
      {
          rem=i%10;
          l++;
          i=i/10;
      }
      printf("%d",l);
      

    return 0;

}
