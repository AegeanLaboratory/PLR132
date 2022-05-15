#include <stdio.h>

int main()
{
    int num;

    printf("Dwse enan arithmo: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("To %d einai thetikos arithmos.", num);
    }
    else if (num < 0)
    {
        printf("To %d einai arnitikos arithmos.", num);
    }
    else
    {
        printf("O arithmos pou edwses einai to miden.");
    }

    return 0;
}
