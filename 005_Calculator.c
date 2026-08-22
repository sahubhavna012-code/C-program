#include<stdio.h>
void main(){
int a,b,n,sum,difer,mul,div;
printf("Enter two numbers:\n ");
scanf("%d %d",&a, &b);
printf("Enter 1 for addition\n");
printf("Enter 2 for Subtraction\n");
printf("Enter 3 for Multiplication\n");
printf("Enter 4 for Division\n");
printf("Enter the no. :\n ");
scanf("%d",&n);
switch(n){
	case 1:
		printf("Addition= %d\n",a+b);
		break;
	case 2:
		printf("Subtraction=%d\n",a-b);
		break;
	case 3:
		printf("Multiplication=%d\n",a*b);
		break;
	case 4:
		printf("Division=%d\n" ,a/b);
		break;
}
getch();
clrscr();
}