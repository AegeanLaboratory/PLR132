#include <stdio.h>

int main()
{

	int i, num, mul = 1;
	
	printf("Dwse enan arithmo: ");
	scanf("%d", &num);
	
	for ( i = 1; i <= num; i++){
		mul *= i;
	}
	
	printf("To ginomeno twn arithmwn apo to 1 ews kai to %d einai %d.", num, mul);

	return 0;
}