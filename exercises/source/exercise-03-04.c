#include <stdio.h>

void symbols(int n, char ch);

int main()
{
    symbols(15, '*');
    symbols(30, '=');
    symbols(40, '!');

    return 0;
}

void symbols(int n, char ch)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        putchar(ch);
    }
    printf("\n");
}
