#include<stdio.h>
struct student
{
	int reg;
	int marks[3];
}s1;

main()
{
	int i;
	//s1={1,{90,92,95}};
	s1.reg=1;
	for(i=0;i<3;i++)
	{
		scanf("%d",&s1.marks[i]);
	}
printf("%d\n",s1.reg);

for (i=0;i<3;i++)
{
	printf("%d\n",s1.marks[i]);
}
}
