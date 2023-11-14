//Pointer 1
#include<stdio.h>
main()
{
	int a=18;
	int *ptr;
	ptr=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",&ptr);
	printf("%u\n",ptr);
	printf("%d\n",*ptr);
}
