#include <stdio.h>
#include <conio.h>
void factorial();
void main()                                   //function declaration
{
	printf("-----TO FIND THE FACTORIAL-----");       //function calling
	factorial();
}
void factorial()
{
	int no,fac=1,i;                               //function definition
	printf("\nEnter The Number :");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fac=fac*i;
	}
	printf("The Factorial Is :%d",fac);
}
