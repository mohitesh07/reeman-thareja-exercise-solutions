/* Write a program to print the count of even numbers between 1-200 also print their sum.
   Author: Mohitesh Ch Agarwal
   Date: 14.10.2017 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count=0,i,sum=0;
	for(i=2;i<200;i++)
	{
		if(i%2==0)
		{
			count++;
			sum+=i;
		}
	}//end of for loop

	printf("Count of even numbers between 1-200 is %d \n",count);
	printf("Their sum is %d \n",sum);

}//end of main function
