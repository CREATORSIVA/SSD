nt main()
{
   int n,rem=0,sum=0,j=0,a=0,i;
   scanf("%d",&n);
   for(i=800;i<=n;i=i+j)
   {   a=i;
       while(a>0)
       {
           rem=a%10;
           sum=sum+rem;
           a=a/10;
       }
       printf("\n%d",sum);
       rem=0;
       sum=0;
       j=j+2;
   
   }

    return 0;
}
