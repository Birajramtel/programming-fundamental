/*
Student Name : Biraj Ramtel
Subject : Programming Fundamentals
Roll No : 11
Program : Write a C program find factorial of the given number using 
recursion functiom
Lab Sheet No : 23
Date : 29 Jan 2017
*/


#include<stdio.h>
int fact(int n);
int main()
{
int a,b;
printf("Enter the number :");
scanf("%d",&a);
b=fact(a);
printf("The factorial of  %d is %d",a,b);
	return 0;
}
int fact(int n)
{
	if(n==1||n==0)
	return 1;
	else
	return n*fact(n-1);
	}
