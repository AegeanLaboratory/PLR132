#include <stdio.h>

float mesos(float a, float b, float c);
void display_char(int num, char ch);
void display_name();
void stars(float mos);

int main()
{
	float vath1, vath2, vath3, mo;

	printf("Efstratia Kazi\n");

	display_name();

	printf("\nDwse 3 vathmous (space): ");
	scanf("%f %f %f", &vath1, &vath2, &vath3);

	mo = mesos(vath1, vath2, vath3);

	printf("O mesos oros einai %.2f.\n", mo);

	stars(mo);

	display_char(45, '=');

	return 0;
}

void display_name()
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Efstratia\n");
	}	
}

float mesos(float a, float b, float c)
{
	float d = (a + b + c) / 3;
	
	return d;
}

void stars(float mos)
{
	int x;

	for (x = 0; x < 13; x++)
	{
		printf("*");
	}
	
	printf("\nO mesos oros einai %.2f.\n", mos);
}

void display_char(int num, char ch)
{
	int start;
	
	for (start = 1; start <= num; start++)
	{
		putchar(ch);
	}
}