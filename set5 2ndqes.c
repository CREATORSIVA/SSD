#include <stdio.h>
#include<string.h>

int main()
{ 
    int l=0,len1=0,len2=0,i;
    char a[10],b[10];
    scanf("%s",a);
    scanf("%s",b);
      l=strlen(a);
      len1=strlen(b);
      if(l!=len1)
      {
          printf("notequal");
          
      }
      else
      {
          for(i=0;a[i]!='\0';i++)
          {
              if(a[i]==b[i])
              {
                  len2++;
              }
              
          }
          if(len2==l)
          {
              printf("%s",a);
          }
          else
          {
              printf("not eqal");
          }
      }
      

    return 0;

}
