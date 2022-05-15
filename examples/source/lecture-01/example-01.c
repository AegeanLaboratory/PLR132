#include <stdio.h>

int main()
{
    int a,b,c = 5;
    a = b = 6;
    a = b + c;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
