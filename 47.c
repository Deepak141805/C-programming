#include<stdio.h> //no parameter but return
#include<conio.h>
int sum1(); // void means no return
main()
{
	int c,z;
	c=sum1();
	printf("%d",c);
}
int sum1()
{
	int y=20,x=10,k=12,w;
	w=x+y-k;
	return w;
	
}
