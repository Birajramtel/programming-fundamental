/*
Student Name : Biraj Ramtel
Subject : Programming Fundamentals
Roll No : 11
Program : Write a program to enter the length and breadth and  disply the area of the rectangle using functions
Lab Sheet No : 19
Date : 18 Jan 2017
*/
#include<stdio.h>
void area();
int main()
{
area();
return 0;
}
void area()
{
	int l,b,A;
printf("Enter the length : ");
scanf("%d",&l);
printf("Enter the breadth : ");
scanf("%d",&b);
A=l*b;
printf("The area of rectangle is %d",A);
}
