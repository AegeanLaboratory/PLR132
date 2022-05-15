#include <stdio.h>
#include <stdlib.h>

void stars(int platos, int ipsos);
void showPlatos(int pPlatos);
void showIpsos(int pIpsos, int pPlatos);

int main()
{
	stars(11,5);
	stars(5,3);
	//stars(3,2);
	return 0;
}

void stars(int platos, int ipsos)
{
	if ((platos < 3) || (ipsos < 2)) return;
		showPlatos(platos);
		showIpsos(ipsos, platos);
		showPlatos(platos);
}

void showPlatos(int pPlatos)
{
	int i = 0;
	for(; i < pPlatos; i++)
		printf("*");
	printf("\n");
}

void showIpsos(int pIpsos, int pPlatos)
{
	int j = 0;
	for(; j < pIpsos - 2; j++)
		printf("*%*c*\n", pPlatos - 2, " ");
}