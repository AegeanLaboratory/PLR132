#include <stdio.h>
#include <stdlib.h>

int len(char *p);

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    puts(lex);

    puts(lex + 35);

    putchar(*(lex+8));

    int len_str = len(lex);

    printf("\n\nLength of string: %d\n", len_str);

    return 0;
}


int len(char *p)
{
    int counter = 0;

    while (*p != '\0')
    {
        counter++;
        p++;
    }

    return counter;
}
