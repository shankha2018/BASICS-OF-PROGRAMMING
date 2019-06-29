#include<stdio.h>
int main()
{
    int decimal_num,binary1[100],binary2[100],i=0,count=0,j=0;
    printf("ENTER DECIMAL NUMBER TO BE CONVERTED TO BINARY: ");
    scanf("%d",&decimal_num);
    while(decimal_num!=0)
    {
                           binary1[i]=decimal_num%2;
                           decimal_num=decimal_num/2;
                           i=i+1;
                           count=count+1;
	}
    for(i=count-1;i>=0;i--)
    {
                           binary2[j]=binary1[i];
                           j=j+1;
    }
    printf("BINARY EQUIVALENT:\n");
    for(i=0;i<count;i++)
    {
                        printf("%d",binary2[i]);
    }
}
