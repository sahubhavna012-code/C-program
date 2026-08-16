#include <stdio.h>
#include <conio.h>
void main()
{
	int r;
	float pi, area, circum;
	printf("enter the value of radius: ");
	scanf("%d", &r);

	pi = 3.14;
	area = pi * r * r;
	printf("the area of circle is : %.2f\n", area);
	circum = 2 * pi * r;
	printf("the circumference of the circle is : %.2f", circum);
	getch();
	clrscr();
}