#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[30];
    int len1=0,len2=0,i,c=0,c1=0,j;
    scanf("%s",a);
    scanf("%s",b);
    len1=strlen(a);
    len2=strlen(b);
   if(len1==len2)
    {
        for(i=0;i<len1-1;i++)
        {
            for(j=i+1;j<len1-1;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
            for(j=i+1;j<len1;j++)
            {
                if(b[i]==b[j])
                {
                    c1++;
                }
            }
            
        }
        if(c1==c)
            {
                printf("yes");
            }
            else
            {
                printf("no");
            }
            
        
    }else
        {
            printf("no");
        }


 return 0;
}
