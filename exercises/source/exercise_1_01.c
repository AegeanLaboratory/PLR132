#include <stdio.h>

int main()
{
	int num1, num2, temp;

	printf("Dwse enan arithmo: ");
	scanf("%d", &num1);

	printf("Dwse akoma enan arithmo: ");
	scanf("%d", &num2);

	printf("\nPrin tin antimetathesi\nnum1 = %d\nnum2 = %d", num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("\n\nMeta tin antimetathesi\nnum1 = %d\nnum2 = %d", num1, num2);

	return 0;
}
