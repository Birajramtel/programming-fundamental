/*
name:Biraj Ramtel
subject:programming fundamental
programme: WAP to create a structure with two integer number and call the structure
in the main method and add both integer value and display the result. 
roll no:11
lab sheet no:27
date:06 febuary 2017
*/
#include<stdio.h>
struct addition
{
	int num1;
	int num2;
};
int main ()
{
	int result;
	struct addition add; 
	printf("Enter the number :");
	scanf("%d",&add.num1);
	printf("Enter another number :");
	scanf("%d",&add.num2);
	result=add.num1+add.num2;
	printf("The sum of two number is %d",result);
	return 0;
	
	}
