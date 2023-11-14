//Array 7 Binary search
#include<stdio.h>
main()
{
	int h[50],n=7,loc,key=5,mid,beg=0,last=n-1,i;
	for(i=0;i<n;i++)
	{
		printf("enter the elements : ");
		scanf("%d",&h[i]);
	}
	while(beg<=last)
	{
		mid=(beg+last)/2;
		
		if (mid==key);
		    {
		    	loc=mid;
		    	break;
			}
		 else if (h[mid]>key)
		{
			last=mid-1;
		}
		else if (h[mid]<key)
		{
			beg=mid+1;
		}
	}
}
