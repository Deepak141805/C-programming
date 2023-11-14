//nested loop
#include<stdio.h>
main()
{
	int i,a,b;
	//create a table
	b=10;
	for (i=0;i<b;i++)
	{
		for(a=1;a<=10;a++)
		    {
		     printf("%d*%d=%d",i,a,i*a);
		     printf("\n"); 
		    }
	}
}

