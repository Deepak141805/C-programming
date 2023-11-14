#include<stdio.h> //with parameter and with return
#include<conio.h>
int sum1(int x,int y);
main()
{
	int a=10,b=20,c;
    c=sum1(a,b);	
    printf("output outside the function in main is %d",c);
}
int sum1(int x,int y)
{
	int z=x+y;
	printf("%d\n",z);
	return z;
}
