//Calloc(^-^)
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("n =  ");
	scanf("%d",&n);
	p=(int*)calloc(n,(sizeof(int)));
	if(p==NULL)
	{
		printf("no memory available");
		exit(1);
	}
	else
	{
		printf("memory allocation was succcessful\n");
		printf("enter the values \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d\n", *(p+i));
		}
	}
}
