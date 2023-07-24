#include <stdio.h>
#include <conio.h>
void main()

{
	char st1[20],st2[20];
	int c;
	printf("Enter The String :");
	scanf("%s",&st1);
	strcpy(st2,st1);
	strrev(st1);
//	printf("\n%s",st1);
//	printf("\n%s",st2);
	if(strcmp(st1,st2)==0)
		printf("The String is Palindrome");
	else
		printf("The String is not Palindrome"); 
}
