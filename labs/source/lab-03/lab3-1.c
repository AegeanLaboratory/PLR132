#include <stdio.h>
#include <stdlib.h>
#define ONOMA "Efstratia Kazi"

int main()
{
	int etos;
	printf("Dose etos :");
	scanf("%d", &etos);
    if ((etos % 4 == 0 && etos % 100 != 0) || etos % 400 == 0)
  	    printf("Disekto\n");
	else
        printf("Kanoniko\n");
    printf(ONOMA);
	return 0;  
}