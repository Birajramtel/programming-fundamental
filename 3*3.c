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
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",array[i][j]);
			}
			printf("\n");
		}
	return 0;
	}
