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
int i,j,n;
printf("Enter the number :");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
	{
		printf("*\t");
	}
	printf("\n");
}
	

	
	
}
