#include<stdio.h>

main() 
{
    int i=2;        
    int Count=0;  

    while (i<=500) 
	{
      Count++;
      i += 2;         
    }
    printf("%d\n", Count);
}
