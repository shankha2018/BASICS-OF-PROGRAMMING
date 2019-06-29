#include<stdio.h>
main()
{
int num;
int count=0;
printf("enter any number:");
scanf("%d",&num);
while(num!=0)
{
	count++;
	num=num/10;
}
printf("%d",count);
}