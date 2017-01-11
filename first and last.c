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
int n,i=1,last,a;
printf("Enter the four digit number");
scanf("%d",&n);
while(i<=3)
{
n=n/10;
i++;
}
printf("The first number is %d\n",n);
printf("Enter the same number");
scanf("%d",&a);
last=a%10;
printf("The last number is %d",last);




return 0;
}
