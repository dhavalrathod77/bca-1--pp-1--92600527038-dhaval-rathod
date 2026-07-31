#include<stdio.h>
#include<conio.h>

void main()
{
	float radius,area;
	clrscr();
	printf("enter the radius of the ciecle: ");
	scanf("%f", & radius);
	area=3.14159 * radius * radius;
	printf("the area of `the circal is:%.2f\n",area);
	getch();
}
