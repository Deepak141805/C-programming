#include<stdio.h>
extern int n=9;
void mystatic();
int y=8;
int main()
{
	int w;
	static int d;
	register int x=7, m;
	auto int k;
	k=y*y;
	printf("\n value of k is %d",k);
	m=x*x;
	printf("\n value of m is %d",m);
	mystatic();
	mystatic();
	mystatic();
}
	mystatic()
{

	static int j=5;
printf("\nvalue of extern int n is %d",n);
	printf("\n value of j is %d",j);
}
