#include <stdio.h>

int main()
{
    float poso, fpa, synolo;
    printf("Aώσε ποσό :");
    scanf("%f", &poso);
    printf("Aώσε ποσοστό ΦΠΑ :");
    scanf("%f", &fpa);
    synolo = poso + poso  *fpa / 100;
    printf("Το τελικό κόστος είναι: %f\n", synolo);
    return 0;
}