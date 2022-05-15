#include <stdio.h>

int sum(int n);

int main()
{
    int athroisma = sum(1000);

    printf("To athroisma apo 1 ews 1000 einai %d.", athroisma);

    return 0;
}

int sum(int n)
{
    int i, athr = 0;

    for (i = 1; i <= n; i++)
    {
        athr += i;
    }

    return athr;
}
