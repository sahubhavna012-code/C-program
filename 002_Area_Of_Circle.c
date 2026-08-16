#include <stdio.h>
#include <conio.h>
void main()
{
	int r;
	float pi, area;
	printf("enter the value of radius: ");
	scanf("%d", &r);

	pi = 3.14;
	area = pi * r * r;
	printf("the area of circle is : %.2f\n", area);

}