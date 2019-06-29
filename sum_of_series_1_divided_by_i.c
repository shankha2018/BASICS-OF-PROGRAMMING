#include<stdio.h>
main()
{
int terms,i;
float sum=0.0;
printf("Enter Number Of Terms: ");
scanf("%d",&terms);
for (i=1;i<=terms;i++)
{
	if (i<terms)
	{
	  printf("1/%d + ",i);
	}
	else
	{
	  printf("1/%d = ",i);
	}
}
for (i=1;i<=terms;i++)
{
	sum=sum+(float)1/i;
}
printf ("%f",sum);
}

