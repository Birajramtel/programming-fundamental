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
	int n,c,rev=0,rem;
	printf("Enter any four number :");
    scanf("%d",&n); 
     c=n;
     while(n>0)
     {
    rem=n%10;
    rev=rem*10+rem;
    n=n/10;
}
        printf("The reverse number is :%d",rev);
		if(rev==c)
		{
		printf("The number is pallidram");
		}
		else
		{
			printf("The number is not pallidram ");
			}
return 0;
}





