#include<stdio.h>
struct result
{
	int marks;
};
struct student
{
	int regno;
	
	struct result r1;
}s1;
main()
{
s1.regno=1;	
s1.r1.marks=100;
printf("%d\n",s1.regno);
printf("%d\n",s1.r1.marks);	
}
