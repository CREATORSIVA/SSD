#include <stdio.h>

int main()
{ int i;
  char a[50];
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
      a[i]=a[i]-32;
      printf("%c",a[i]);
  }

    return 0;
}
