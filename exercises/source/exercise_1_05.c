#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Dwse ton 1o arithmo: ");
    scanf("%d", &num1);

    printf("Dwse ton 2o arithmo: ");
    scanf("%d", &num2);

    printf("Dwse ton 3o arithmo: ");
    scanf("%d", &num3);

    int max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }

    printf("O megaluteros arithmos einai to %d.", max);

    return 0;
}
