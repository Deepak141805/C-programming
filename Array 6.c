//Array 6 Find the largest and smallest number
#include<stdio.h>
main()
{
	int arr[4],i;
	for (i=0;i<5;i++)
	{
		printf("Enter the number: - \n");
		scanf("%d",&arr[i]);
    }
    printf("\nShow the numbers \n");
    for (i=0;i<5;i++)
    {
    printf("\nThe element is %d",arr[i]);
	}
	int smallest;
	smallest=arr[0];
	for(i=0;i<5;i++)
	{
		if (arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}	
	printf("\nthe smallest value is %d",smallest);
}
