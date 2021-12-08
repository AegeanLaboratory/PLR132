#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Dwse arithmo: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("To tetragwno tou arithmou %d einai: %.2f", num, pow(num,2));
    }
    else
    {
        printf("O kubos tou arithmou %d einai: %.2f", num, pow(num,3));
    }

    return 0;
}
