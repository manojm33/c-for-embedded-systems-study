/* computation of the gcd of 2 integer numbers */
#include <stdio.h>
int main(void)
{
long int number1, number2;
long int x, y, remainder;
printf("Computation of the greatest common divisor.\n");
printf("Enter 2 positive integer numbers: ");
scanf("%ld%ld%*c", &number1, &number2);
/* put the smallest integer in x, the biggest one in y*/
if (number1 < number2)
{
x = number1;
y = number2;
}
else
{
x = number2;
y = number1;
}
/*assign a starting value to the variable remainder*/
remainder = x;
while (remainder != 0)
{
remainder = y % x;
y = x;
x = remainder;
}
printf("gcd(%ld, %ld) = %ld \n", number1, number2, y);
return 0;
}
