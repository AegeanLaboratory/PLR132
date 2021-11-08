#include <stdio.h>

int main()
{
    float a, b, c, mo, gin, sum;
    printf("∆ώσε τον πρώτο αριθµό:");
    scanf("%f", &a);
    printf("∆ώσε τον δεύτερο αριθµό:");
    scanf("%f", &b);
    printf("∆ώσε τον τρίτο αριθµό:");
    scanf("%f", &c);
    mo = (a + b + c) / 3;
    gin = a * b * c;
    sum = a + b + c;
    printf("Το άθροισµα των %f, %f, %f είναι %f\n",a, b, c, sum);
    printf("Το γινόµενο των %f, %f, %f είναι %f\n", a, b, c, gin);
    printf("Ο µέσος όρος των %f, %f, %f είναι %f\n", a, b, c, mo);
    return 0;
}