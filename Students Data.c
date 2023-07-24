#include <stdio.h>
#include <conio.h>
struct student{
	char name[25];
	int m1,m2,m3,tot;
	float avg;
}s;
void main()
{
	//clrscr();
	printf("Enter The Name :");
	scanf("%s",s.name);
	printf("Enter The Tamil,English,Maths Mark :");
	scanf("%d %d %d",&s.m1,&s.m2,&s.m3);
	s.tot=s.m1+s.m2+s.m3;
	s.avg=s.tot/3;
	printf("\nName :%s \nTamil mark :%d \nEnglish Mark :%d \nMaths Mark :%d",s.name,s.m1,s.m2,s.m3);
	printf("\nTotal Mark :%d \nAverage :%f",s.tot,s.avg);
//	getch();
}
