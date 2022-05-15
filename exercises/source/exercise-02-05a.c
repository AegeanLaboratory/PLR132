#include <stdio.h>

#define START 32
#define END 128

int main()
{
    int i;
    int j = 0;

    for (i = START; i <= END; i++, j++)
    {
        if(!(j % 10) && (j != 0))
        {
            putchar('\n');
        }
        printf("%d=%c, ", i, i);
    }

    return 0;
}
