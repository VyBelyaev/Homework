#include <stdio.h>
#include <stdlib.h>

int main()
{
    	int floors;
            printf("How many floors do you want :");
            scanf("%d",&floors);
            int i;
            int j;
            for( i =0;i <5;i++)
	{
		for( j=0;j<=5;j++)
		{
			if(j>i)
			break;
			printf("*");
		}
		printf("\n");
		}
		printf("\n");
		for( i =1;i <=5;i++)
		{
			for( j = 5;j>0;j--)
			{
				if(i>j)
				break;
				printf("*");
			}
			printf("\n");
			}
			printf("\n");
			printf("     *\n");
            printf("    ***\n");
            printf("   *****\n");
            printf("  *******\n ");
            printf("*********\n");
            printf("     *\n");


}
