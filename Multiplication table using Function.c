//Multiplication Table Using Function

#include <stdio.h>
#include <conio.h>
void table();
void table()
{
	int a,r,i,tab;
	printf("Enter The Range :");
	scanf("%d",&r);
	printf("Enter The Table :");
	scanf("%d",&a);
	for(i=1;i<=r;i++)
	{
		tab=a*i;
		printf("%d x %d = %d\n",a,i,tab);
	}	
}

void main()
{
	table();
}

