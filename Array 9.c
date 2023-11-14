//Array 9 operations on array
//Insertion
#include<stdio.h>
main()
{
	int a[10]={9,3,6,1,8};
	int i,v=7,n=5; //n is the total no. of elements
	int index=3; //index location for entering the element
	int value=18;
	printf("\nPrinting the elements of the array before insertion \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	//shift right
	for(i=5;i>=index;i--)
	{
		a[i+1] = a[i];
	}
	a[index]=value;
	n++;
	printf("\nPrinting the elements of the array after insertion \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
