
#include <stdio.h>
 
int main()
{
    float amount,rate,time,si;
 
    //printf("Enter principal (Amount) :");
    scanf("%f",&amount);
 
   // printf("Enter rate :");
    scanf("%f",&rate);
 
   // printf("Enter time (in years) :");
    scanf("%f",&time);
 
    si=(amount*rate*time)/100;
 
    printf("\n%f",si);
 
    return 0;
}
