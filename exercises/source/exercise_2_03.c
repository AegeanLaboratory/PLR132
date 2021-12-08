#include <stdio.h>

int main()
{
    char ch;
    int n, i;

    printf("Dwse enan charaktira kai enan arithmo: ");
    scanf("%c %d", &ch, &n);

    for (i = 0; i < n; i++)
    {
        printf("%c", ch);
    }

    return 0;
}
