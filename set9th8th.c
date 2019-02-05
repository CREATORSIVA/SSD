#include <stdio.h>

int main()
{

   int a, b, max, step, lcm;
scanf("%d%d",&a,&b);
   lcm = 0;

   if(a > b)
   {
      max =a;
      step = a;
   }
   else
    {
        max =b;
      step = b;
    }
   while(1)
   {
      if(max%a == 0 && max%b == 0) 
      {
         lcm = max;
         break;    
      }

      max += step;
   }

   printf("LCM is %d", lcm);
   return 0;
}
 
