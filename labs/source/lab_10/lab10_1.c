#include <stdio.h>
#include<string.h>

struct prosopika_stoixeia
{
    char epon[20];
    char onom[15];
    float weight;
    float height;
    int age;
};

void display(struct prosopika_stoixeia p);

int main()
{
    struct prosopika_stoixeia me;
    int i;

    strcpy(me.onom, "Yoda");
    strcpy(me.epon, "Yoda");
    me.height = 1.54;
    me.weight = 39;
    me.age = 19;

    display(me);

    struct prosopika_stoixeia *ptr;

    ptr = &me;

    printf("\n%s\n", ptr->onom);
    printf("Baros: %.2f\n", ptr->weight);
    printf("Ypsos: %.2f\n\n", ptr->height);

    printf("Dwse tin ilikia sou: ");
    scanf("%d", &ptr->age);

    printf("Dwse to eponimo sou: ");
    scanf("%s", ptr->epon);

    display(*ptr);

    struct prosopika_stoixeia filoi[10];

    strcpy(filoi[0].onom, "Yoda");
    strcpy(filoi[0].epon, "Yoda");
    filoi[0].weight = 46;
    filoi[0].age = 18;
    filoi[0].height = 1.57;

    strcpy(filoi[9].onom, "Yoda");
    strcpy(filoi[9].epon, "Yoda");
    filoi[9].weight = 65;
    filoi[9].age = 25;
    filoi[9].height = 1.69;

    for(i = 1; i <= 8; i++)

    {
        filoi[i].age = 19;
    }

    return 0;
}

void display(struct prosopika_stoixeia p)
{
    printf("%s ", p.epon);
    printf("%s\n", p.onom);
    printf("======================\n");

    printf("Hlikia: %d\n", p.age);
    printf("Baros: %.2f\n", p.weight);
    printf("Ypsos: %.2f\n", p.height);
}
