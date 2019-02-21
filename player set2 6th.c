
#include <stdio.h>



int main(void) 

{

	int n,i,j,num,min,count=0;

	int array[100];

	scanf("%d",&n);

	for(i=0;i<n;i++)

	{

		scanf("%d ",&array[i]);

	}

	for(i=0;i<n;i++)

	{

		 count=0;

		for(j=i+1;j<n;j++)

		{

			if(array[i]==array[j] )

			{

				count=count+1;	

			}

			

		}

	if(count==0)

	{

		printf("%d",array[i]);

	}

	}



	

	

	return 0;
}
