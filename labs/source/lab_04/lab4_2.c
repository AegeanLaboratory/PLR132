#include <stdio.h>
#include <stdlib.h>

int main()
{
	float s = 0;
	int i;
	for (i = 1; i <= 1000; i++)
	{
	  s = s + 1.0 / i;
    } 
    printf("Synolo=%f\n", s);
    return 0;
}