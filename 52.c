#include<stdio.h>
int add1(int); //declaration
main()
{
	int a=10;
	printf("sum is : %d",add1(a)); //function calling
}
int add1(int x) //function defination
{
	if (x==0)
	return 0;
	else
	return x+add1(x-1);
}
