#include <stdio.h> 
#include <stdlib.h> 

void out();

int main()
{
    out();
    out();
    out();
    return 0;
}

void out()
{
    static char ch = 'A';
    printf("%c\n", ch);
    ch++;
}