#include <stdio.h>
#include <conio.h>
void main()
{
	char a[20],b[20];
	int a1,b1;
	printf("Enter Your String 1:");
	scanf("%s",&a);
	printf("Enter Your String 2:");
	scanf("%s",&b);
	a1=strlen(a);
	b1=strlen(b);
	if(a1==b1)
		printf("The Both String Has Same Length");
	else
		printf("The String Has Not Same Length");
}
