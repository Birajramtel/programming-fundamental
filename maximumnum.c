/*
Student Name : Biraj Ramtel
Subject : Programming Fundamentals
Roll No : 11
Program : Write a C program to  write an arrey
Lab Sheet No : 23
Date : 01 feb 2017
*/
#include<stdio.h>
int main()
{
int num[10],i,g=0;
for(i=0;i<10;i++)
{
	printf("Enter the number :");
	scanf("%d",&num[i]);
}
for(i=0;i<10;i++)
{
	if(g<num[i])
	{
		g=num[i];
		}
	}
printf("The greatest value is :%d",g);
return 0;
}
