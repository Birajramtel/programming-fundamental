/*
name:Biraj Ramtel
subject:programming fundamental
programme: WAP to declare and print multi dimensional array
roll no:11
lab sheet no:26
date:03 febuary 2017
*/
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3], c[3][3], i,j;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("Enter the element of A :");
		scanf("%d",&a[i][j]);
		printf("Enter the element of B :");
		scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("The sum is :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;	
}
