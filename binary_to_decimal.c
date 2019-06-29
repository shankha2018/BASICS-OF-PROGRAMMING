#include<stdio.h>
#include<math.h>
int main()
{
	int binary[100],reverse_binary[100],decimal=0,digit,num,i;
	printf("ENTER NUMBER OF DIGITS IN BINARY NUMBER :\n ");
	scanf("%d",&num);
	printf("ENTER BINARY NUMBER DIGIT BY DIGIT : \n");
	for (i=0;i<num;i++)
	{
		printf("\n ENTER %dTH DIGIT:\n",i+1);
		scanf("%d",&binary[i]);
		if (binary[i]!=0 && binary[i]!=1)
		{
			printf("BINARY NUMBER CONTAINS ONLY 1's AND 0's....WRONG INPUT");
			exit(0);
		}
	}
	printf("YOUR BINARY NUMBER :");
	for (i=0;i<num;i++)
	{
		printf("%d",binary[i]);
	}
	int j=0;
	for (i=num-1;i>=0;i--)
	{
		reverse_binary[i]=binary[j];
		j=j+1;
	}
	for(i=0;i<num;i++)
	{
		decimal=decimal+(reverse_binary[i]*pow(2,i));
	}
	printf("\n DECIMAL EQUIVALENT : %d",decimal);
}
