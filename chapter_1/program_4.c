/* Write a program to read the address of the user. Display the result by breaking it in multiple lines.
   Author: Mohitesh Ch Agarwal
   Date: 15.10.2017 */

#include<stdio.h>

int main()
{
	char address[200],i=0;

	printf("----ENTER YOUR ADDRESS BELOW-----\n");
	gets(address);

	printf("----YOUR ADDRESS----\n");
	while(address[i]!='\0')
	{
		if((address[i]=='.')||(address[i]==';'))
			printf("\n");
		else
			printf("%c",address[i]);
		i++;
	}//end of while loop

	printf("\n");

	return 0;
}//end of main function
