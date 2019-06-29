#include<stdio.h>
main()
{
int days,months;
printf("Enter Number Of Days: ");
scanf("%d",&days);
months=days/30;
days=days%30;
printf("Number of Months: %d\n",months);
printf("Number Of Days: %d",days);
}