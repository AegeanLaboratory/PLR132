#include <stdio.h>

int main()
{
    int var, hour, minutes, seconds, num;

    printf("Dwse xrono se deuterolepta: ");
    scanf("%d", &var);

    hour = (var / 3600);
    num = (var % 3600);
    minutes = (num / 60);
    seconds = (num % 60);

    printf("\nTa %d deuterolepta einai:\n", var);
    printf("%d wres\n%d lepta\n%d deuterolepta", hour, minutes, seconds);

    return 0;
}
