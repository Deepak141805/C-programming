#include<stdio.h>
int main()	
{
	int h[4],i,n;
	printf("how many numbers: - ");
	scanf("%d",&n);
	for (i=0; i<5; i++) 
	{ 
		printf("enter the elements in the array - ");
		scanf("%d",&h[i]);
    }
	for (i=0; i<5; i++)
	printf("%d",h[i]);
}
