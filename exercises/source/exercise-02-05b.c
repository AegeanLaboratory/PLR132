#include <stdio.h>

#define START 32
#define END 128

int main()
{
    int i;
    int j = 1;

    for (i = START; i <= END; i++, j++)
    {
        printf("%d=%c, ", i, i);
        if(!(j % 10))
        {
            putchar('\n');
        }
    }

    return 0;
}
