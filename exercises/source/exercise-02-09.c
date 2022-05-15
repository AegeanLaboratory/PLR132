#include <stdio.h>

int main()
{
    float num, max = 0.0;
    int counter = 0;

    do
    {
        printf("Dwse arithmo: ");
        scanf("%f", &num);

        if (num > max)
        {
            max = num;
        }

        counter++;

    } while(counter < 30);

    printf("\nO megalyteros arithmos einai to %.2f", max);

    return 0;
}
