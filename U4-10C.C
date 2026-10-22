//rathod dhaval
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float num,total=0;

	clrscr();

	printf("\n enter 10 numaber:");

	for(i=1; i <=10; i++)
	{
		printf("\n enter number %d:",i);
		scanf("%f",&num);
		total+=num;
	}

		printf("\n total value = %.2f\n",total);


		getch();



}