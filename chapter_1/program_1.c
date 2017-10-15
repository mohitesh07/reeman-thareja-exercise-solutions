/* Write a program to read 10 integers. Display these numbers by printing 3 numbers in a line seperated by commas.
   Author: Mohitesh Ch Agarwal
   Date: 14.10.2017 */

#include<stdio.h>
#include<stdlib.h>

void input();
void display();

int array[10],i;

int main()
{
	printf("\f");
	input();
	display();
	return 0;
}//end of main function

void input()
{
	printf("Enter 10 integers: ");
	for(i=0;i<10;i++)
		scanf("%d", &array[i]);
}//end of input function

void display()
{
	int k=0;i=0;
	for(i=1;i<=10;i++)
	{
		printf("%d ,",array[i-1]);
		if(i%3==0)
			printf("\n");
	}
	printf("\b \n");
}//end of display function
