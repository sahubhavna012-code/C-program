#include<stdio.h>
void main(){
int a=56;
int b=34;
int c=89;
if(a>=b && a>=c){
	printf("The greatest number is: %d",a);
}
else if(b>a && b>c){
	printf("The greatest number is: %d",b);
}
else{
	printf("The greatest number is: %d",c);
}
getch();
clrscr();
}