#include <stdio.h> 
#include <stdlib.h> 

int add(int anum1, int anum2);
int gin(int gnum1, int gnum2);
void out(int sum, int pro);

int main()
{
    int x, y, aa, gg;

    printf("Dwse duo arithmous: ");
    scanf("%d %d", &x, &y);

    aa=add(x, y);
    gg=gin(x, y);
    out(aa, gg);
    return 0;
}

int add(int anum1, int anum2)
{
    return anum1 + anum2;
}

int gin(int gnum1, int gnum2)
{
    return gnum1 * gnum2;
}

void out(int sum, int pro)
{
    printf("Athroisma = %d\n", sum);
    printf("Ginomeno = %d\n", pro);
}