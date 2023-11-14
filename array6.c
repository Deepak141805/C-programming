//Aray 6 Linear Search
#include<stdio.h> //searching the elements 
main()
{
	int x[50],i;
	int loc=-1,key, n=5; //n is the no. of element
    for (i=0; i<n; i++) 
	{
		scanf("%d",&x[i]);
	}
	key=3; //this is the value which you want to search	
	for (i=0; i<n; i++)
	{
		if (x[i]== key)
		{
			loc=i;
			//break;
		}
	}
	if (loc!=-1)
	{
		printf("\nElement found",loc+1);
	}
	else
	{
		printf("\nElement not found");
	}
}

	
