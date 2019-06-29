#include<stdio.h>
/*to print      1
			  2 3 2
			3 4 5 4 3 */
int main()
{
	int i,j,left,right,k,rightcount,count,rows;
	printf("ENTER NUMBER OF ROWS : ");
	scanf("%d",&rows);
	count=rows-1;
	left=1;
	right=0;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=count;j++)
		{
			printf(" ");
		}
		for(k=i;k<=left;k++);
		{
			printf("%d",k);
		}
		left=left+2;
		if (i!=1)
		{
			for(k=right;k>=i;k--)
			{
				printf("%d",k);
			}
		}
		right=right+2;	
		printf("\n");
		count--;
	}
}
