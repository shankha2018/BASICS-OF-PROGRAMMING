#include<stdio.h>
int main()
{
    int octal_num,binary1[100],binary2[100],i=0,count=0,j=0;
    printf("*****OCTAL NUMBERS HAVE THEIR DIGITS RANGING BETWEEN 0-7.SO CARE SHOULD BE TAKEN BY THE USER WHILE THEY INPUT FOR THE SAME*****\n");
    printf("ENTER OCTAL NUMBER TO BE CONVERTED TO BINARY: ");
    scanf("%d",&octal_num);
    while(octal_num!=0)
    {
                           binary1[i]=octal_num%2;
                           octal_num=octal_num/2;
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
