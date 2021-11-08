#include <stdio.h>

int main()
{

	int num, c1 = 0, c2 = 0;
	
	do
	{
		printf("Dwse arithmo: ");
		scanf("%d", &num);
		
		if (num > 0)
			c1++;
		else if (num < 0)
			c2++;
	} while (num != 0);
	
	printf("To plithos twn thetikwn arithmwn einai %d.", c1);
	printf("\nTo plithos twn arnitikwn arithmwn einai %d.", c2);

	return 0;
}