#include<stdio.h>
int fact1(int); //declaration
main()
{
	int a=7;
	printf("factorial is : %d",fact1(5)); //function calling
}
int fact1(int x) //function defination
{
	if (x==0 || x==1)
	return 1;
	else
	return x*fact1(x-1);

}
