#include <stdio.h>

int main()
{

	int i, a, b;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &a);
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &b);
	
	for (i = a; i <= b; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}