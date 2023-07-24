#include <stdio.h>
#include <conio.h>
void main()
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
	printf("%d",pr);
	if(pr==0)
		printf("\tPrime Number");
	else
		printf("\tNot A Prime Number");			
}
