include <stdio.h>

int main()
{
    
   int a, b, max, step, lcm,gcd=0;
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
   gcd=a*b/lcm;

   printf("gcd is %d",gcd);
    return 0;
}
