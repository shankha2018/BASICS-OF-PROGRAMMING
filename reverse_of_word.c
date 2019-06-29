#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	int i=0,j;
	printf("Enter A Word: ");
	gets(str);
	int len=strlen(str);
	printf("Reverse is: ");
	for(j=len-1;j>=0;j--)
	{
		rev[i]=str[j];
		printf("%c",rev[i]);
		i++;
	}
}
