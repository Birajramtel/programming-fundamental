/*
Student Name : Biraj Ramtel
Subject : Programming Fundamentals
Roll No : 11
Program : Write a program to find diameter of circle using functions
Lab Sheet No : 19
Date : 18 Jan 2017
*/
#include<stdio.h>
void diameter();
int main()
{
int r,diameter;
printf("Enter the radius :");
scanf("%d",&r);
diameter=r*2;
printf("The diameter of the circle is %d",diameter);
return 0;
}
