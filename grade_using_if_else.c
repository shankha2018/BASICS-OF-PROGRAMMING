#include<stdio.h>
int main()
{
  float marks;
  char grade;
  printf("Enter Your Marks");
  scanf("%f",&marks);
  if (marks>=90 && marks<=100)
     {
  	grade='O';
      }
  else if(marks>=80 && marks<90)
	{
	  grade='E';
	}
  else if(marks>=70 && marks<80)
	{
	  grade='A';
	}
  else if(marks>=60 && marks<70)
	{
	  grade='B';
	}
  else if(marks>=50 && marks<60)
	{
	  grade='C';
	}
  else if(marks>=40 && marks<50)
	{
	  grade='D';
	}
  else
	{
	  grade='F';
	}
printf("Your Grade Is %c",grade);
}

  
  