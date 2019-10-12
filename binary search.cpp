#include<stdio.h>
#include<stdlib.h>
#define size 10
int main()
{
	int a[size],num,i,n,beg,end,mid,found=0;
	printf("\n enter the numbers of elements in array\n");
	scanf("%d",&n);
	printf("enter the elements\n:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n enter the number to be searched\n");
	scanf("%d",&num);
	beg=0;
	end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==num)
		{
			printf("\n %d is present in the array at position %d",num,mid+1);
			found=1;
			break;
		}
		else if(a[mid]>num)
		end=mid-1;
		else
		end=mid+1;
	}
	if(beg>end && found==0)
	printf("\n %d does not exist in the array",num);
	return 0;
}
