#include<stdio.h>
main()
{
	int num,i=1,fac=1;
	printf("enter the number :- ");
	scanf("%d",&num);
	while(i<=num)
	{
	 fac*=i;
	 i++;	
	}
printf("= %d",fac);
}
