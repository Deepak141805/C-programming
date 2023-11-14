//Pointer 4 Covention
#include<stdio.h>
main()
{
	int a[]={10,2,3,4,5};
	int *p=a,i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+1));
	}
}

