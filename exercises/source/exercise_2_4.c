#include <stdio.h>

int main()
{

	float sum = 0;
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		sum += 1.0/i;
	}
	
	printf("Sum: %f", sum);
	
	return 0;
}