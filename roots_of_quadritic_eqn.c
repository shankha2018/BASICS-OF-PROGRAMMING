#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float a,b,c,root1,root2;
float real,imaginary,discriminant;
printf("Enter The Values Of a, b, c: ");
scanf("%f %f %f",&a,&b,&c);
printf("The Quadratic Equation: %f(x^2)+%f(x)+%f \n",a,b,c);
if (a==0||b==0||c==0)
{
printf("SORRY!!No solution");
}
else
{
discriminant=b*b-4.0*a*c;
if (discriminant<0)
{
printf("Imaginary Roots\n");
real=-b/(2.0*a);
imaginary=(sqrt(abs(discriminant))/(2.0*a));
printf("Roots are: %f+i%f, %f-i%f",real,imaginary,real,imaginary);
}
else if(discriminant==0)
{
printf("Roots Are Real & Equal\n");
root1=-b/(2.0*a);
root2=root1;
printf("Roots Are: %f, %f",root1,root2);
}
else if(discriminant>0)
{
printf("Roots are Real & Distinct\n");
root1=((-b+sqrt(discriminant))/(2.0*a));
root2=((-b-sqrt(discriminant))/(2.0*a));
printf("Roots are: %f, %f",root1,root2);
}
}
return(0);
}

