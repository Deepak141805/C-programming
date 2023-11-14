//Array 12
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
	printf("Enter Elements of the arrays A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements in array B\n");
	
  	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	  
	}
	printf("\n");
	printf("Elements of array a are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("Elements of array b are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//sum of matrices
	printf("sum of matrix a and b is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]= a[i][j]+b[i][j];
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");		
	}
	//multiplication of matix
	printf("multiplication of matices : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j]= a[i][j]*b[i][j];
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");		
	}
}
