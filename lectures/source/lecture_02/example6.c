#include <stdio.h>

#define pi 3.141592

int main()
{
    float aktina, per, emvado;
    printf("∆ώσε ακτίνα:");
    scanf("%f", &aktina);
    per = 2 * pi * aktina;
    emvado = pi * aktina * aktina;
    printf("Κύκλος µε ακτίνα %f έχει περίµετρο %f και εµβαδό
    %f\n", aktina, per, emvado);
    return 0;
}