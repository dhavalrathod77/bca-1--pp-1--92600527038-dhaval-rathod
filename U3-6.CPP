#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("\n enter any charecter;");
	scanf("%c",&x);

	printf("\n input charecter is : %c",x+32);
	printf("\n ASCII code is :%d",x+32);
	getch();
}