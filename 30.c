#include<stdio.h>
main()
{
	int a,b;
	printf("Enter Values for a and b : ");
            	scanf("%d %d",&a,&b);
	if (a>b)
        	{
	         	printf("a is greater");
        	}
	if(a==b)
	{
		printf("a and b are equal");
	}
	if(a<b)
	{
		printf("b is greater");
	}
}
