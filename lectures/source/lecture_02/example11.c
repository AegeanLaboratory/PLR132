#include <stdio.h>

int main()
{

    int a, b, c, d, e;
    a = b = c = d = 5;
    a++;
    b = ++a;
    c = --d;
    e = ++a * d--;

    printf("Η τιµή του a ειναι %d\n", a);
    printf("Η τιµή του b ειναι %d\n", b);
    printf("Η τιµή του c ειναι %d\n", c);
    printf("Η τιµή του d ειναι %d\n", d);
    printf("Η τιµή του e ειναι %d\n", e);

    return 0; 
}