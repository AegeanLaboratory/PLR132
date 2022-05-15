#include <stdio.h>

int main()
{
    int a, b, aa, bb, x, y;
    x = y = 100;
    a = ++x;
    b = y++;
    aa = ++x;
    bb = y++;
    printf("Η τιμή του a ειναι %d\n", a);
    printf("Η τιμή του b ειναι %d\n", b);
    printf("Η τιμή του aa ειναι %d\n", aa);
    printf("Η τιμή του bb ειναι %d\n", bb);
    return 0;
}