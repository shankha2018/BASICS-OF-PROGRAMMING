#include<stdio.h>
/*program to compute -1+1/3!-1/5!.....*/
int main()
{
  int n;
  long fact=1;
  printf("Enter The Number Of Terms: ");
  scanf("%d",&n);
  int i,j,k;
  float sum=0;
  for(i=1;i<=n;i++)
  {
	if(i%2!=0)
	{
	  if(i<n)
	  {
	     printf("-1/%d! ",2*i-1);
	  }
	  else if(i==n)
	  {
	     printf("-1/%d!= ",2*i-1);
	  }
	}
	if(i%2==0)
	{
	  if(i<n)
	  {
	     printf("+1/%d! ",2*i-1);
	  }
	  else if(i==n)
	  {
	     printf("+1/%d!= ",2*i-1);
	  }
	}
  }
  for(i=1;i<=n;i++)
  {
	j=2*i-1;
	for(k=1;k<=j;k++)
	{
	  fact=fact*i;
	}
	if (i%2!=0)
	{
	  sum=sum-(float)1/fact;
	}
	else
	{
	  sum=sum+(float)1/fact;
	}
  }
  printf("%f",sum);
}
	
