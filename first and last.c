/*
Name: Biraj Ramtel
Roll:
Subject : Programming fundamental
Lab sheet: 17
Program : WAP  to  
Date : 11jan 2017
*/
#include<stdio.h>
int main()
{
int n,last;
printf("Enter the four digit number");
scanf("%d",&n);
last=n%10;
printf("The last number is %d",last);
while(n>=10)
{

n=n/10;

}
printf("The first number is %d\n",n);
//printf("Enter the same number");
//scanf("%d",&a);





return 0;
}
