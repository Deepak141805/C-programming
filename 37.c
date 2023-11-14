//switch statement
#include<stdio.h>
main()
{
	int a=1,b=3,c=5;
	printf("enter your choice of character ");
	scanf("%d%d%d",&a,&b,&c);
	switch(a,b,c)
	{
		case'1':
			printf("kohli is the best");
		break;
	    case'2':
		printf("\nkohli is king");
		break;
	    case'3':
		printf("\nI am iron man");
		
		
		default:
			printf("\nyour choice is amazing");
	}
	
	
}
