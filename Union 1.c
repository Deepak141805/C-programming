//Union
#include<stdio.h>
union student
{
	char name[20];
	int regno;
	float marks;
}s1;
main()
{
	s1.regno=1;
	printf("%d\n",s1.regno);
	printf("%.2f\n",s1.marks);
}
