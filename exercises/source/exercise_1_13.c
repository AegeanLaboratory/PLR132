#include <stdio.h>

#define E 0.23
#define A 0.70
#define T 0.15

int main(){
	
	float poso;
	char eidos;
	
	printf("Posa grammatosima theleis kai poio eidos (E-A-T)? ");
	scanf("%f %c", &poso, &eidos);
	
	switch(eidos)
	{
		case 'E':
			printf("Me to eidos %c tha plirwseis %.2f.", eidos, (poso*E));
			break;
		case 'A':
			printf("Me to eidos %c tha plirwseis %.2f.", eidos, (poso*A));
			break;
		case 'T':
			printf("Me to eidos %c tha plirwseis %.2f.", eidos, (poso*T));
			break;
		default:
			printf("To eidos pou zitas den yparxei!");
	}
	return 0;
}