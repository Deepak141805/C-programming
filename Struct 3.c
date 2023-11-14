#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary;
};
int main()
{
	int i;
	struct emp e[100];
	for(i=0;i<2;i++)
	{
	printf("enter the name age and salary\n");
	
	gets(e[i].name);
	scanf("%d",&e[i].age);
	scanf("%f",&e[i].salary);
	}
	for(i=0;i<2;i++)
	{
		printf("name is %s \n",e[i].name);
		printf("name is %s \n",e[i].age);
		printf("name is %s \n",e[i].salary);	
	}
	return(0);
}

