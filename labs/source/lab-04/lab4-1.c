#include <stdio.h>
#include <stdlib.h>

int main()
{
	float b1, b2, b3;
	float mo;
	int i;
	do
	{
	  printf("Dose treis bathmous : "); 	
	  scanf("%f %f %f", &b1, &b2, &b3);   
      if (b1 == 0 && b2 == 0 && b3 == 0) break; 
      if (b1 < 0 || b2 < 0 || b3 < 0) exit(1);
	  mo = (b1 + b2 + b3) / 3;  
	  printf("o mesos oros einai : %f\n", mo);
    } while (b1 != 0 || b2 != 0 || b3 != 0);
    for (i = 1; i <= 40; i++)               
        putchar('-');                    
    putchar('\n');
	return 0;
}