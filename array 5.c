//Array 5 find the sum of the entered values and then find number of even and odd values....
#include<stdio.h>
main()	
{
	int arr[4],i,s=0,os=0,es=0;
	for (i=0;i<5;i++) 
	{
		printf("Enter the number %d: \n",i);
		scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)	
	{
		s = s+arr[i];
	}
      printf("\nSum of the entered numbers is %d",s);
      for (i=0;i<5;i++)
    {
	if (arr[i]%2==0)
	{
		printf("\nValue %d is a Even no.",arr[i]);
		os =os+arr[i];
	}
	else
	{
	printf("\nValue %d is a Odd no.",arr[i]);
	es=es+arr[i];
	}
}
    printf("\nSum of the odd values %d",os);
	printf("\nSum of the even values %d",es);
	// find the smallest value...
	int smallest;
	smallest=arr[0];
	for(i=0;i<5;i++)
	{
		if (arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}	
	printf("\nThe smallest value is %d",smallest);
// find the largest value......
	int largest;
	largest=arr[0];
	for(i=0;i<5;i++)
	{
		if (arr[i]>largest)
		{
			largest=arr[i];
		}
	}	
	printf("\nThe largest value is %d",largest);
}
