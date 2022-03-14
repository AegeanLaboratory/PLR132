#include <stdio.h>

int main()
{
    FILE *joke;
    char ch;

    joke = fopen("joke.txt", "r");

    if(joke==NULL) exit(2);
    while(ch!=EOF)
    {
        ch = fgetc(joke);
        putchar(ch-1);
    }

    fclose(joke);

    return 0;
}
