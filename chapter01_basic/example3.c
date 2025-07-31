/* Example-3
 * Take the input from user in miles and then convert it to the miles
 * 
 * Author: Manoj
 * Date: 31 Jul 2025
 * /
 */

#include<stdio.h>

int main()
{
	float km, miles;
	printf("Enter the number of miles: ");
	scanf("%f%*c", &miles);
	km = miles * 1.609;
	printf("%f mile equals %f kilometer\n", miles, km);
	return 0;
}
