#include <stdio.h>
#include <stdlib.h>

#define PI 3.145769589
#define MESSAGE "TO PROGRAMMA HTAN GEMATO LATHI ALLA TA EFTIAKSA OLA!!!!!"

int main()
{
	float aktina, emvado, perimetros;
	
	printf("Dose tin aktina toy kykloy :");
	scanf("%f", &aktina);
	
	emvado = PI * aktina * aktina;
	perimetros = 2 * PI * aktina;
	
	printf("Apotelesmata\n");
	printf("================\n");
	printf("Emvado=%f  Perimetros=%f\n", emvado, perimetros);
	printf(MESSAGE);
	printf("\n\n");
	
  	return 0;
}