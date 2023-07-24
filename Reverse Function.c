#include <stdio.h>
#include <conio.h>
void main()
{
	char st1[20],st2[20];
	int l,i;
	printf("Enter The String:");
	scanf("%s",&st1);
	l=strlen(st1);
	for(i=0;i<l;i++)
	{
		st2[i]=st1[l-i-1];
	}
	printf("After: %s",st2);
}
