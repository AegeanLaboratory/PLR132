#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[SIZE];
    int sum = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % (9999 - 1000 + 1) + 1000;
        sum += ar[i];
    }

    printf("\n\nSum = %d\n", sum);

    int max = ar[0];
    int min = ar[0];

    for (i = 0; i < SIZE; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    printf("Max = %d\nMin = %d\n\n", max, min);

    for(i = SIZE-1; i >= 0; i--)
        printf("Sthn %dh thesi vriskete to %d.\n", i, ar[i]);

    return 0;
}
