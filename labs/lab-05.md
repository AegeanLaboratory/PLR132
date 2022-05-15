# Εργαστήριο 5

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (22/03/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 5ου εργαστηρίου είναι το εξής:

- Τµηµατοποίηση προγράµµατος
- Ορισµός και κλήση συναρτήσεων
- Μεταβίβαση παραµέτρων

## Άσκηση 5.1 - Μέσος όρος

Σκοπός της παρούσας άσκησης είναι η εµπέδωση του ορισµού και της χρήσης
συναρτήσεων που είναι η βάση του τµηµατικού προγραµµατισµού.

### Βήμα 1

Να γραφεί πρόγραµµα το οποίο απλά θα εµφανίζει το ονοµατεπώνυµο σας στην οθόνη. Ο κώδικας του προγράµµατος θα είναι µέσα στη συνάρτηση main(). Μεταγλωττίστε και εκτελέστε το πρόγραµµα.

```c
#include <stdio.h>

int main()
{
    printf("Yoda\n");

    return 0;
}
```

### Βήμα 2

Προσθέσετε στο πρόγραµµά σας µια επιπλέον συνάρτηση µε όνοµα **display_name** η οποία θα εµφανίζει στην οθόνη το όνοµα σας (το µικρό) 5 φορές. Αποφασίστε για τον τύπο της. Καλέστε τη συνάρτηση από τη main(). Μεταγλωττίστε και εκτελέστε το πρόγραµµα.

```c
#include <stdio.h>

void display_name();

int main()
{
    printf("Yoda\n");

    display_name();

    return 0;
}

void display_name()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Efstratia\n");
    }
}
```

### Βήμα 3

Προσθέσετε στο πρόγραµµά σας µια επιπλέον συνάρτηση µε όνοµα **mesos** η οποία θα δέχεται ως παραµέτρους τρείς πραγµατικούς αριθµούς και θα επιστρέφει ως τιµή τον µέσο όρο τους.

```c
#include <stdio.h>

void display_name();
float mesos(float a, float b, float c);

int main()
{
    printf("Yoda\n");

    display_name();

    return 0;
}

void display_name()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Efstratia\n");
    }
}

float mesos(float a, float b, float c)
{
    float d = (a + b + c) / 3;

    return d;
}
```

### Βήμα 4

Προσθέστε τον κατάλληλο κώδικα στη συνάρτηση main() ώστε να ζητούνται από τον χρήστη οι τρείς βαθµοί ενός φοιτητή και να καταχωρίζονται σε αντίστοιχες µεταβλητές (να **µην** χρησιµοποιήστε ίδια ονόµατα µε αυτά της συνάρτησης mesos). Κατόπιν µε τη **χρήση της συνάρτησης mesos**, να υπολογίζεται ο µέσος όρος των βαθµών, να καταχωρίζεται σε µια µεταβλητή της main() και να εµφανίζεται στην οθόνη. Μεταγλωττίστε και εκτελέστε το πρόγραµµα.

```c
#include <stdio.h>

void display_name();
float mesos(float a, float b, float c);

int main()
{
    float vath1, vath2, vath3, mo;

    printf("Yoda\n");

    display_name();

    printf("\nDose 3 vathmoys: ");
    scanf("%f %f %f", &vath1, &vath2, &vath3);

    mo = mesos(vath1, vath2, vath3);

    printf("O mesos oros einai %.2f.\n", mo);

    return 0;
}

void display_name()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Yoda\n");
    }
}

float mesos(float a, float b, float c)
{
    float d = (a + b + c) / 3;

    return d;
}
```

### Βήμα 5

Προσθέστε µια ακόµη συνάρτηση µε όνοµα **stars**. Η συνάρτηση να εµφανίζει στην οθόνη 13 συνεχόµενα αστεράκια (************). Καλέστε τη συνάρτηση από τη main() αµέσως µετά από την εµφάνιση του µέσου όρου. Μεταγλωττίστε και εκτελέστε το πρόγραµµα. Μέσα στη συνάρτηση stars προσθέστε µια πρόταση η οποία να εµφανίζει τον µέσο όρο των βαθµών του φοιτητή o οποίος έχει καταχωρισθεί σε µια µεταβλητή της main() στο βήµα 4. Τι θα πρέπει να κάνετε;

```c
#include <stdio.h>

void display_name();
float mesos(float a, float b, float c);
void stars(float mos);

int main()
{
    float vath1, vath2, vath3, mo;

    printf("Yoda\n");

    display_name();

    printf("\nDose 3 vathmoys: ");
    scanf("%f %f %f", &vath1, &vath2, &vath3);

    mo = mesos(vath1, vath2, vath3);

    printf("O mesos oros einai %.2f.\n", mo);

    stars(mo);

    return 0;
}

void display_name()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Yoda\n");
    }
}

float mesos(float a, float b, float c)
{
    float d = (a + b + c) / 3;

    return d;
}

void stars(float mos)
{
    int x;

    for (x = 0; x < 13; x++)
    {
        printf("*");
    }

    printf("\nO mesos oros einai %.2f.\n", mos);
}
```

### Βήμα 6

Προσθέστε µια ακόµη συνάρτηση µε όνοµα **display_char** η οποία θα δέχεται ως παραµέτρους έναν ακέραιο αριθµό και έναν χαρακτήρα. Η συνάρτηση θα πρέπει να εµφανίζει τον χαρακτήρα της δεύτερης παραµέτρου τόσες φορές όση η τιµή της πρώτης παραµέτρου (του ακέραιου αριθµού). Καλέστε τη συνάρτηση **display_char** από τη main() µε τα κατάλληλα ορίσµατα ώστε να εµφανίζει 45 φορές τον χαρακτήρα '='. Μεταγλωττίστε και εκτελέστε το πρόγραµµα.

```c
#include <stdio.h>

void display_name();
float mesos(float a, float b, float c);
void stars(float mos);
void display_char(int num, char ch);

int main()
{
    float vath1, vath2, vath3, mo;

    printf("Yoda\n");

    display_name();

    printf("\nDose 3 vathmoys: ");
    scanf("%f %f %f", &vath1, &vath2, &vath3);

    mo = mesos(vath1, vath2, vath3);

    printf("O mesos oros einai %.2f.\n", mo);

    stars(mo);

    display_char(45, '=');

    return 0;
}

void display_name()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Yoda\n");
    }
}

float mesos(float a, float b, float c)
{
    float d = (a + b + c) / 3;

    return d;
}

void stars(float mos)
{
    int x;

    for (x = 0; x < 13; x++)
    {
        printf("*");
    }

    printf("\nO mesos oros einai %.2f.\n", mos);
}

void display_char(int num, char ch)
{
    int start;

    for (start = 1; start <= num; start++)
    {
        putchar(ch);
    }
    putchar('\n'); 
}
```
