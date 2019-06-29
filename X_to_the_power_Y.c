#include<stdio.h>
main()
{
	int x,y,r=1,i,t;
	printf("Enter A number For Base: ");
	scanf("%d",&x);
	printf("Enter A Number For Power: ");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		t=x;
		r=r*t;
	}
	printf("The Value Of %d To The Power %d is %d",x,y,r);
}
