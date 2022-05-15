# Εργαστήριο 8

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (12/04/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 8ου εργαστηρίου είναι το εξής:

- Πίνακες 1Δ
- Πίνακες χαρακτήρων για την αποθήκευση συμβολοσειρών
- Χρήση συναρτήσεων χειρισμού συμβολοσειρών

## Άσκηση 8.1 - Πίνακες 1Δ

Nα γραφεί πρόγραμμα στο οποίο....

### Βήμα 1

Να δηλωθούν δύο πίνακες χαρακτήρων με ονόματα **onom** και **epon** αντίστοιχα. Φροντίστε ώστε οι πίνακες να είναι κατάλληλοι για την αποθήκευση συμβολοσειρών μέχρι 30 χαρακτήρες (συμπεριλαμβανομένου και του \0). Επίσης δηλώστε ακόμα έναν πίνακα χαρακτήρων 40 θέσεων με όνομα **tmima**. Κατά την **δήλωση** του πίνακα **onom** καταχωρήστε στον πίνακα το μικρό σας όνομα (σε greeklish).

```c
#include <stdio.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];
    return 0;
}
```

### Βήμα 2

Κατόπιν το πρόγραμμα θα πρέπει να ζητάει να **πληκτρολογηθεί** το επώνυμο το οποίο θα πρέπει να καταχωρίζεται στον πίνακα **epon**. Με χρήση της κατάλληλης συνάρτησης **εμφανίστε** στην οθόνη τις συμβολοσειρές των πινάκων **onom** και **epon**!

```c
#include <stdio.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    return 0;
}
```

### Βήμα 3

Με χρήση της κατάλληλης συνάρτησης, καταχωρίστε μέσα στον πίνακα **tmima** τη συμβολοσειρά "TMHMA POLITISMIKIS TEXNOLOGIAS". Με χρήση της κατάλληλης συνάρτησης εμφανίστε το **πλήθος** των χαρακτήρων της συμβολοσειράς του πίνακα **tmima**.

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    return 0;
}
```

### Βήμα 4

Με χρήση της κατάλληλης συνάρτησης, **προθέστε** στο **τέλος** της συμβολοσειράς του πίνακα **epon** τη συμβολοσειρά του πίνακα **onom** με ένα **κενό διάστημα** μεταξύ τους. Εμφανίστε τη συμβολοσειρά του πίνακα **epon** και κατόπιν εμφανίστε μόνο το **πρώτο** γράμμα της συμβολοσειράς του πίνακα **epon**.

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    return 0;
}
```

### Βήμα 5

Δηλώστε έναν πίνακα ακεραίων 100 θέσεων με όνομα **ar**. Με χρήση της συνάρτησης **rand()** καταχωρίστε στον πίνακα **ar** 100 **τυχαίους** αριθμούς.

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[100];
    int i;

    for (i = 0; i < 100; i++)
        ar[i] = rand();

    return 0;
}
```

### Βήμα 6

Στη συνέχεια του προγράμματος, υπολογίστε και εμφανίστε το **άθροισμα** των αριθμών του πίνακα **ar**.

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[100];
    int sum = 0;
    int i;

    for (i = 0; i < 100; i++)
    {
        ar[i] = rand();
        sum += ar[i];
    }
    printf("\n\nSum = %d\n", sum);

    return 0;
}
```

### Βήμα 7

Στη συνέχεια του προγράμματος, υπολογίστε και εμφανίστε τον **μεγαλύτερο** και τον **μικρότερο** αριθμό του πίνακα **ar**.

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[100];
    int sum = 0;
    int i;

    for (i = 0; i < 100; i++)
    {
        ar[i] = rand();
        sum += ar[i];
    }
    printf("\n\nSum = %d\n", sum);

    int max = ar[0];
    int min = ar[0];

    for (i = 0; i < 100; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    printf("Max = %d\nMin = %d\n\n", max, min);

    return 0;
}
```

### Βήμα 8

Στη συνέχεια του προγράμματος, εμφανίστε όλους τους αριθμούς του πίνακα **ar** με **αντίθετη** σειρά (από τον τελευταίο στον πρώτο).

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[100];
    int sum = 0;
    int i;

    for (i = 0; i < 100; i++)
    {
        ar[i] = rand();
        sum += ar[i];
    }
    printf("\n\nSum = %d\n", sum);

    int max = ar[0];
    int min = ar[0];

    for (i = 0; i < 100; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    printf("Max = %d\nMin = %d\n\n", max, min);

    for(i = 100-1; i >= 0; i--)
        printf("Sthn %dh thesi vriskete to %d.\n", i, ar[i]);

    return 0;
}
```

### Βήμα 9

Τροποποιήστε το πρόγραμμα ώστε οι τυχαίοι αριθμοί που καταχωρίζονται στον πίνακα ar να είναι στο διάστημα από το 1000 μέχρι το 9999!

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[100];
    int sum = 0;
    int i;

    for (i = 0; i < 100; i++)
    {
        ar[i] = rand() % (9999 - 1000 + 1) + 1000;
        sum += ar[i];
    }
    printf("\n\nSum = %d\n", sum);

    int max = ar[0];
    int min = ar[0];

    for (i = 0; i < 100; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    printf("Max = %d\nMin = %d\n\n", max, min);

    for(i = 100-1; i >= 0; i--)
        printf("Sthn %dh thesi vriskete to %d.\n", i, ar[i]);

    return 0;
}
```

### Βήμα 10

Αν τρέξτε το πρόγραμμα πολλές φορές θα παρατηρήστε ότι οι τυχαίοι αριθμοί είναι πάντα ίδιοι!!! Τροποποιήστε το πρόγραμμα ώστε οι τυχαίοι αριθμοί να είναι **πραγματικά** τυχαίοι!


```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[100];
    int sum = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        ar[i] = rand() % (9999 - 1000 + 1) + 1000;
        sum += ar[i];
    }
    printf("\n\nSum = %d\n", sum);

    int max = ar[0];
    int min = ar[0];

    for (i = 0; i < 100; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    printf("Max = %d\nMin = %d\n\n", max, min);

    for(i = 100-1; i >= 0; i--)
        printf("Sthn %dh thesi vriskete to %d.\n", i, ar[i]);

    return 0;
}
```

### Βήμα 11

Τροποποιήστε το πρόγραμμα ώστε το μέγεθος του πίνακα ar να καθορίζεται από μια σταθερά **SIZE** που θα ορίζεται σε μια οδηγία **#define**. Αλλάξτε το μέγεθος του πίνακα σε 10 αλλά και την υπόλοιπη λειτουργικότητα του προγράμματος με μια μόνο αλλαγή

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    char onom[30] = "Yoda";
    char epon[30], tmima[40];

    printf("Dwse to eponimo sou: ");
    gets(epon);

    printf("%s %s\n", onom, epon);

    printf("%s\n", strcpy(tmima, "TMHMA POLITISMIKIS TEXNOLOGIAS"));
    printf("Len = %d\n", strlen(tmima));

    strcat(strcat(epon, " "), onom);
    puts(epon);
    putchar(epon[0]);

    int ar[SIZE];
    int sum = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % (9999 - 1000 + 1) + 1000;
        sum += ar[i];
    }

    printf("\n\nSum = %d\n", sum);

    int max = ar[0];
    int min = ar[0];

    for (i = 0; i < SIZE; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    printf("Max = %d\nMin = %d\n\n", max, min);

    for(i = SIZE-1; i >= 0; i--)
        printf("Sthn %dh thesi vriskete to %d.\n", i, ar[i]);

    return 0;
}
```
