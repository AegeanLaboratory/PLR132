#include <stdio.h>

#define TMHMA "TMHMA POLITISMIKHS TEXNOLOGIAS"

int main()
{
	float b1, b2, b3;
	float mo;
	printf("dose treis bathmoys:");
 	scanf("%f %f %f", &b1, &b2, &b3);
	mo = (b1 + b2 + b3) / 3;
	printf("o mesos oros soy einai:%f\n", mo);
	if (mo < 5)
	   	printf("Kopikes\n");
    else if (mo = 5)
       	printf("Perases sto tsak!\n");
    else if (mo < 8.5)
       	printf("Perases mia xara\n");   
    else if (mo <= 10)   
		printf("BRAVO arista\n");
    else
		printf("Oop Provlima!!!\n");
    printf(TMHMA);
	return 0;  
}
