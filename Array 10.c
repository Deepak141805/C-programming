//Array 10 operations on array
//Deletation
#include<stdio.h>
main()
{
	int a[10]={9,3,6,1,8};
	int i,v=7,n=5; //n is the total no. of elements
	int index=3; //index location for entering the element
	int value=18;
	printf("\nPrinting the elements of the array before deletation\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	//shift left
	for(i=index;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	n--;
	printf("\nPrinting the elements of the array after deletation\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
