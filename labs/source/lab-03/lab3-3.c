#include <stdio.h>
#include <stdlib.h>

int main()
{
	float eis, foros;
	printf("dose to eisodima:");
 	scanf("%f", &eis);
	   foros = 0;                 
    else if (eis <= 15000)
       foros = 0 + (eis - 5000) * 10 / 100;
       foros = 0 + 10000 * 10 / 100 + (eis - 15000) * 20 / 100;
    else   
       foros = 0 + 10000 * 10 / 100 + 15000 * 20 / 100 + (eis - 30000) * 35 / 100;
    printf("O foros gia eisodima %f einai %f\n", eis, foros);
	return 0;  
}