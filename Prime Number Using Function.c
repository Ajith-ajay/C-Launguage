#include <stdio.h>
#include <conio.h>
void prime();
void main()
{
	prime();
}
void prime()
{
	int a,i,no,pr=0;
	printf("Enter A Number :");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		no=a%i;
		if(no==0)
			pr=pr+1;
	}
	if(pr==0)
		printf("\tPrime Number");
	else
		printf("\tNot A Prime Number");			
}
