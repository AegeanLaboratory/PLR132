#include <stdio.h>

int main()
{
    float y, b, dms;
    printf("Aώσε ύψος και βάρος :");
    scanf("%f %f", &y, &b);
    dms = b / (y * y);
    printf("Ο AΜΣ με ύψος %f και βάρος %f είναι: %f\n", y, b, dms);
    return 0;
}