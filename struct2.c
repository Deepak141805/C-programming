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
	struct emp e1={"Rohit",20,10000 };
	struct emp e1 *ptr;
	ptr=&e1;
	printf("%s,%d,%f",e1.name,e1.age,e1.salary);
    printf("%s,%d,%f", ptr->name, ptr->age, ptr->salary);
    printf("%s,%d,%f",(*ptr).name,(*ptr).age,(*ptr).salary);
}

