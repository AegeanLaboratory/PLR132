#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ar, ta;
    srand(time(NULL));
    ta = rand() % 1000 + 1;
    do
    {
        printf("Dose enan arithmo apo to 1 mexri to 1000 >");
        scanf("%d", &ar);
        if (ar > ta) 
            printf("Pio mikros\n");
        else if (ar < ta) 
            printf("Pio megalos\n");
    } while (ta != ar);
    
    printf("BRAVO to brikes\n");
    
    return 0;
}
