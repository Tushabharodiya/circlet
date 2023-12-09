#include<stdio.h>
main()
{
	int i,j,s;
	
	for(i=4;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}
		for(j=4;j>i;j--)
		{
			if(j==4)
			{
				printf("*");
			}else
			{
				printf(" ");
			}
		}
		for(j=i;j<=4;j++)
		{
			if(j==4)
			{
				printf("*");
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}