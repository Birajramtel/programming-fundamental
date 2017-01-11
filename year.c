/*
Name:-Biraj Ramtel
Roll no:-11
Subject:-Programme Fundamental
lab:-16
programme:- WAP to check the leap years
*/
#include<stdio.h>
int main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if(n%4==0)
{
	printf("the year is leap year");
}
else if(n%100!=0)
{
	printf("the year is not  leap year");
	}
	else if(n%400==0)
	{
		printf("The year is leap year");
		}
		else
		{
			printf("The  year is not leap year");
			}
return 0;
}
