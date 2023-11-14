#include<stdio.h>
main()
{	
	int a=5,b,c;
	printf(" the value of a before unary operator is %d",a);
	b=--a;
	printf("\n the value of a after unary operetor is %d",a);
	printf("\n the value of b after unary operetor is %d",b);
	
    b=--a;
	printf("\n the value of a after unary operetor is %d",a);
	printf("\n the value of b after unary operetor is %d",b);
	
	c=a++ +b;
	printf("\n the value of a after unary operetor is %d",a);
	printf("\n the value of c after unary operetor is %d",c);
	printf("\n Virat Kohli is the Greatest Bater Ever!!");
}
