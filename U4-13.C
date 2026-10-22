#include <stdio.h>
#include <conio.h>

void main() {
    int x,y, rev = 0, rem ;

    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &y);

    x = y;

    while (x != 0) {
	rem = x % 10;
	rev = rev * 10 + rem;
	x /= 10;
    }

    printf("Reverse of %d = %d\n",y , rev);

    getch();
}
