#include <stdio.h>
#include <conio.h>
void main()
{
    int i,p=0,no;
    printf("Enter A Numbert :");
    scanf("%d",&no);
    for(i=1;i<no;i++)
    {
        if(no%i==0)
            p=p+i;
    }
    if(p==no)
        printf("\nIt is a perfect number");
    else
        printf("\nNot a perfect number");
}
