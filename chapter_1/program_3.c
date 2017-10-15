/* Write a program to count the number of vowels in a text.
   Author: Mohitesh Ch Agarwal
   Date: 15.10.2017 */

#include<stdio.h>

int main()
{
	char string[100],i=0,count=0;

	printf("Enter a string below\n");
	scanf("%s", string);

	while(string[i]!=NULL)
	{	if((string[i]=='a')||(string[i]=='A')||(string[i]=='e')||(string[i]=='E')||(string[i]=='i')||(string[i]=='I')||(string[i]=='o')||(string[i]=='O')||(string[i]=='u')||(string[i]=='U'))
			count++;
		i++;
	}

	printf("Count of vowels is %d\n",count);
}//end of main function
