#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]="I am a student";
	int i=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}
