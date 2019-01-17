#include<stdio.h>
int main()
{
	char str[100];
	int i,c;
	printf("Enter Your Name: ");
	gets(str);
	printf("\nYour Name: ");
	for (i=0;str[i]!='\0';i++)
	{
		if (i==0)
		{
			printf("%c",str[i]);
		}
		if (str[i]==' ')
		{
			printf(".%c",str[i+1]);
			c=i;
		}
	}
	for (i=c+2;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
}

