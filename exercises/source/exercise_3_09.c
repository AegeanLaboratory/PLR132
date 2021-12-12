#include <stdio.h>

float mo(float a, float b);

int main()
{
    printf("O mesos oros einai: %.1f", mo(5, 10));
    return 0;
}

float mo(float a, float b)
{
    float mesos = (a + b) / 2.0;
}
