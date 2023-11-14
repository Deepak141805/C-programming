#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]="student";
	char temp;
	int i=0;
	int j=strlen(s1)-1;
	while(i<j)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
		i++;
		j--;
		
		printf("%s\t",s1);
	}
}
