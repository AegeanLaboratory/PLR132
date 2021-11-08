#include <stdio.h>

int main()
{

	float eisodima, foros;
	
	printf("Dwse to eisodima sou: ");
	scanf("%f", &eisodima);
	
	if (eisodima <= 10000)
	{
		foros = 0;
		printf("Me eisodima %.2f o foros einai: %.2f", eisodima, foros);
	}
	else if (eisodima <= 15000)
	{
		foros = eisodima * 0.1;
		printf("Me eisodima %.2f o foros einai: %.2f", eisodima, foros);
	}
	else
	{
 		foros = eisodima * 0.2;
		printf("Me eisodima %.2f o foros einai: %.2f", eisodima, foros);
	}

	return 0;
}