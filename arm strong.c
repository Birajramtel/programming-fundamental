/* 
name:Biraj Ramtel
roll:
subject:programming fundamental
programme: Write the program to check entered number is pallidram or not 
lab sheet no:22
date:23 january 2017
*/
#include<stdio.h>
int main()
{
	int n,arm=0,rem,i;
    
     for(i=1;i<=1000;i++);
     while(n>0)
     {
    rem=n%10;
   arm=arm+rem*rem*rem;
    n=n/10;
}
		if(arm==0)
		{
		printf("The number is armstrong");
		}
		else
		{
			printf("The number is not armstrong ");
			}
return 0;
}
