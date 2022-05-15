#include <stdio.h>

int main()
{
    float b1, b2, b3, b4, b5;

    printf("Dwse vathmo 1: ");
    scanf("%f", &b1);
    printf("Dwse vathmo 2: ");
    scanf("%f", &b2);
    printf("Dwse vathmo 3: ");
    scanf("%f", &b3);
    printf("Dwse vathmo 4: ");
    scanf("%f", &b4);
    printf("Dwse vathmo 5: ");
    scanf("%f", &b5);

    float max = b1, min = b1;

    if (b2 > max) max = b2;
    else if (b2 < min) min = b2;
    if (b3 > max) max = b3;
    else if (b3 < min) min = b3;
    if (b4 > max) max = b4;
    else if (b4 < min) min = b4;
    if (b5 > max) max = b5;
    else if (b5 < min) min = b5;

    int sum = b1 + b2 + b3 + b4 + b5 - max - min;

    float mo = sum/3.0;

    printf("MO: %.2f", mo);

    return 0;
}
