#include<stdio.h> 
int main()
{
	int l,b,A,P;
	printf("Enter the number");
	scanf("%d",&l);
	printf("Enter the number");
	scanf("%d",&b);
	A=l*b;
	printf("The area is:%d\n",A);
	P=2*(l+b);
	printf("The petimeter is :%d\n",P);
	return 0;
}
