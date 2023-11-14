#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	for (i=2; i<=6; i++)
	{
		if (i%2==1)
		{
			goto Kohli;
		}
		Kohli:
			printf("\nkohli is the best");
			printf("\n%d",i);
		
	}
}
