#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Dwse arithmo: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        printf("H tetrwgoniki riza tou %.2f einai %.2f.", num, sqrt(num));
    }
    else
    {
        printf("Lathos arithmos!");
    }

    return 0;
}
