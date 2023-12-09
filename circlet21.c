#include<stdio.h>
main()
{
	int i,j,c=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(c==12)
			{
				c++;
				continue;
	        }
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}