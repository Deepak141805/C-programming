//Pointers 5 //Types of Pointers
#include<stdio.h>
main()
{
	int *ptr=NULL; //NULL Pointer
	int ptr1=NULL;
	printf("Value of ptr is %d\n",ptr);
	// Generic Pointer
	int a=10,b=9;
	char c='A';
	void *ptr4,*ptr5;
	ptr4=&a;
	printf("the vlaue at generic pointer is %d\n",*(int*)ptr4);
	
	ptr5=&c;
	printf("the value at generic pointer is %c\n",*(char*)ptr5);
}
