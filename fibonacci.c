/*
Student Name : Biraj Ramtel
Subject : Programming Fundamentals
Roll No : 11
Program : Write a C program to fibonacci number
Lab Sheet No : 19
Date : 18 Jan 2017
*/
#include<stdio.h>
int main()
{
int a=1,b=1,i,c,n=10;
printf("Enter the number :");
scanf("%d",&n);

for(i=1;i<=n;i++)
	{
		
		c=a+b;
		printf("%d\t",a);
		a=b;
		b=c;
		
	}
	return 0;
	
	
}
