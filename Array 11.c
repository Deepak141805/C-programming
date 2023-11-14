//Array 11 #2D Array
#include<stdio.h>
main()
{
    //ways to initialise an array
	int a[2][2]={{1,3},{6,5}};
	int a1[2][2]={2,3,4,5};
	int a2[2][2]={{1},{3,4}};
	int a3[2][2]={0};
	int a4[][2]={1,2,3};
	int a5[2][2];
	int i,j;
	printf("the elements of the arrays \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the values : ");
		scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<2;i++)//for rows
	{
	for(j=0;j<2;j++)//for columns
	{
	printf("%d",a[i][j]);	
	}
	printf("\n");
}
}
