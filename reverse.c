//reverse number
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rev=0,a,n1;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	n1=no;
	while(no>0)
	{
		a=no%10;
		no=no/10;
		rev=(rev*10)+a;
	}
	printf("\n-----OUTPUT-----------------------------\n");
    printf("REVERSR NUMBER OF %d IS %d",n1,rev);
}
