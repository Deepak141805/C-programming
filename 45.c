#include<stdio.h> //no parameter and no return
#include<conio.h>
void print1(); // void means no return
main()
{
	int i;
	for(i=1;i<7;i++)
	print1(); //function calling
}
void print1()
{
	printf("\n Kohli-122*");
}
