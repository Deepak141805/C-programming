#include<stdio.h>
extern int a=10;
main()
{
	printf("value of a global a inside main %d",a);
	{
		int a=90;
		printf("\nvalue of a inside nested block %d",a);
	}
}
