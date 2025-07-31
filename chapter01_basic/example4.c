/* Example 4
 * Program to obtain 2 integers from the user and printing the sum and differece 
 * Author: Manoj
 * Date: 31 Jul 2025
 * */

#include<stdio.h>

int main()
{
	int num1,num2;
	int sum;
	int difference;
	printf("Enter two positive intgers: \n");
	scanf("%d",&num1);
	scanf("%d",&num2);

	sum=num1+num2;
	difference=num1-num2;

	printf("The sum of entered digits is = %d\n",sum);
	printf("The difference of entered digits is = %d\n",difference);

	return 0;
}
