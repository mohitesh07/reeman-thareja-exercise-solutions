/* Write a program to read two floating point numbers. Add these numbers and assign the result to integer. Finally display the value of all the three variables.
   Author: Mohitesh Ch Agarwal
   Date: 15.10.2017 */

#include<stdio.h>

int main()
{
	float n1,n2; int sum;
	printf("----Enter two floating point numbers----\n");
	printf("n1= ");
	scanf("%f", &n1);
	printf("n2= ");
	scanf("%f", &n2);

	sum = n1+n2;

	printf("----OUTPUT----\n");
	printf("n1= %f,n2= %f, sum= %d\n",n1,n2,sum);
}//end of main function
