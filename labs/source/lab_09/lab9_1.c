#include <stdio.h>

#define SIZE 5

void display(char name[], float price[]);
float max(float pStock[]);
void bubble_sort(float sort[], int n);

int main()
{
    char name_stock[10];
    float stock_price[SIZE];
    int i;

    printf("Dwse to onoma tis metoxis: ");
    fgets(name_stock, 10, stdin);

    for(i = 0; i < SIZE; i++)
    {
        printf("Dwse timi %d sunedriasis: ", (i+1));
        scanf("%f", &stock_price[i]);
    }

    display(name_stock, stock_price);

    printf("\nH megisti timi tis metoxis einai: %.2f\n", max(stock_price));

    bubble_sort(stock_price, SIZE);
    display(name_stock, stock_price);

    return 0;
    }

    void display(char name[], float price[])
    {
    int k;

    printf("\n%s", name);
    puts("==========");

    for(k = 0; k < SIZE; k++)
    {
        printf("%.2f\n", price[k]);
    }
    }

    float max(float pStock[])
    {
    float max_s;
    int j;

    max_s = pStock[0];

    for(j = 0; j < SIZE; j++)
    {
        if (pStock[j] > max_s)
            max_s = pStock[j];
    }

    return max_s;
    }

    void bubble_sort(float sort[], int n)
    {
    int x, p;
    float temp;

    for(p = 1; p <= n-1; p++)
    {
        for (x = n-1; x >= p; x--)
        {
            if (sort[x] > sort[x-1])
            {
                temp = sort[x];
                sort[x] = sort[x-1];
                sort[x-1] = temp;
            }
        }
    }
}
