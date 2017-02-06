/*
Student Name : Biraj Ramtel
Subject : Programming Fundamentals
Roll No : 11
Program : WAP to display the following output: 
			
			      1 2 3 4
			      5 6 7 8
Lab Sheet No : 19
Date : 16 Jan 2017
*/
#include<stdio.h>
int main ()
{
	int n,count=0;
	printf("Enter the number :");
scanf("%d",&n);
while(n>0)
{
	n=n/10;
	count++;
	 }
	 printf("The number of counts are :%d",count);
return 0;

}
