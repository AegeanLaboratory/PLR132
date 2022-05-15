#include <stdio.h>

#define USER "Efstratia Kazi\n"

main()
{
    float b1, b2, b3, b4;
    float mo;
    int etos_gennisis, ilikia;

    printf("Dose 4 bathmoys\n\n\n");
    scanf("%f-%f-%f-%f", &b1, &b2, &b3, &b4);

    mo = (b1 + b2 + b3 + b4) / 4;
    
    printf("Dose etos gennisis: ");
    scanf("%d", &etos_gennisis);

    ilikia = 2021 - etos_gennisis;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);
    printf("Hlikia: %d\n", ilikia);

}