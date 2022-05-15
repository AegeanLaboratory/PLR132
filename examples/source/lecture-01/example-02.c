#include <stdio.h>

int main()
{
    const int a = 10;
    int b, c;
    b = 5 + (c = 9);
    c = a + b + 1; 
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
