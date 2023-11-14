//Array 8 Bubble swapping
#include<stdio.h>
main()
{
	int a[20],i,j,hold,n=6;
	for (i=0;i<n;i++)
	{
		printf("enter the elements : ");
		scanf("%d",&a[i]);
	}
	//loop to control the passee : 6-1=5
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}		
		}
	}
	for (i=0;i<n;i++)
	{
		printf("\t %d", a[i]);
	}
}
