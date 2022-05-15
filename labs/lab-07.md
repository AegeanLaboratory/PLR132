# Εργαστήριο 7

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (05/04/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 7ου εργαστηρίου είναι το εξής:

- Χρήση δεικτών
- Χρήση συµβολοσειρών µέσω δείκτη
- Μεταβίβαση δεικτών σε συναρτήσεις

## Άσκηση 7.1 – Χρήση Δεικτών

Τροποποιήστε το παρακάτω πρόγραµµα ακολουθώντας τα παρακάτω βήµατα.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;
    return 0;
}
```

### Βήμα 1

Μέσα στη συνάρτηση **main()** δηλώστε τρεις **δείκτες** τύπου **int** µε ονόµατα **p1**, **p2** και **p3**. Στον δείκτη **p1** καταχωρήστε τη **διεύθυνση** της µεταβλητής **b**, στον **p2** τη διεύθυνση της µεταβλητής **c** και στον **p3** τη διεύθυνση της µεταβλητής **d**.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    return 0;
}
```

### Βήμα 2

Με χρήση του δείκτη **p3** καταχωρήστε στη µεταβλητή **d** το 100. Στη πρόταση που θα γράψετε **δεν** πρέπει να αναφέρεται καθόλου το όνοµα της µεταβλητής d.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    return 0;
}
```

### Βήμα 3

Με χρήση του δείκτη **p1**, **αυξήστε** τη τιµή της µεταβλητής **b** κατά **ένα** και µε χρήση του δείκτη **p2** **µειώστε** τη τιµή της µεταβλητής **c** κατά **ένα**. Στις προτάσεις που θα γράψετε **δεν** πρέπει να αναφέρονται καθόλου τα ονόµατα των µεταβλητών b και c.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    return 0;
}
```

### Βήμα 4

**Χωρίς** να χρησιµοποιήστε τα ονόµατα των µεταβλητών **b**,**c** και **d**, γράψτε µία πρόταση η οποία να καταχωρίζει µέσα στη µεταβλητή d το **άθροισµα** των περιεχοµένων των µεταβλητών b και c.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    return 0;
}
```

### Βήμα 5

Με µία **printf** εµφανίστε τα περιεχόµενα των µεταβλητών b,c και d χρησιµοποιώντας τα **ονόµατα** τους. Γράψτε ακόµα µια **printf** η οποία θα εµφανίζει τα περιεχόµενα των µεταβλητών b,c και d χρησιµοποιώντας **µόνο** τους **δείκτες** p1, p2 και p3.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    return 0;
}
```

### Βήμα 6

∆ηλώστε µια µεταβλητή δείκτη τύπου **char** µε όνοµα **lex**. Μέσα στο δείκτη **lex** καταχωρήστε τη **συµβολοσειρά** "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINΟNIAS". Ουσιαστικά στον lex θα καταχωριστεί η διεύθυνση της πρώτης θέσης µνήµης στην οποία έχει καταχωριστεί η συµβολοσειρά.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    return 0;
}
```

### Βήμα 7

Χρησιµοποιώντας το δείκτη **lex** εµφανίστε τη συµβολοσειρά µε τη συνάρτηση **puts**.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    puts(lex);

    return 0;
}
```

### Βήμα 8

Χρησιµοποιώντας µε κατάλληλο τρόπο τον δείκτη **lex**, εµφανίστε µόνο τη **τελευταία** λέξη της συµβολοσειράς (το "EPIKOINONIAS").

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    puts(lex);

    puts(lex + 35);

    return 0;
}
```

### Βήμα 9

Χρησιµοποιώντας µε κατάλληλο τρόπο τον δείκτη **lex**, εµφανίστε µόνο το **ένατο** γράµµα της συµβολοσειράς.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    puts(lex);

    puts(lex + 35);

    putchar(*(lex+8));

    return 0;
}
```

### Βήμα 10

∆ηµιουργήστε µια **συνάρτηση** µε όνοµα **len()**, η οποία θα δέχεται ως παράµετρο ένα **δείκτη** τύπου **char**. Η συνάρτηση θα πρέπει να µετράει το **πλήθος** των χαρακτήρων ξεκινώντας από τον χαρακτήρα στον οποίο δείχνει ο δείκτης που της µεταβιβάστηκε µέχρι να εντοπίσει τον χαρακτήρα **τερµατισµού** '\0'. Η
συνάρτηση θα πρέπει να επιστρέφει ως **τιµή** το **πλήθος** των χαρακτήρων που **µέτρησε**.

```c
#include <stdio.h>
#include <stdlib.h>

int len(char *p);

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    puts(lex);

    puts(lex + 35);

    putchar(*(lex+8));

    return 0;
}


int len(char *p)
{
    int counter = 0;

    while (*p != '\0')
    {
        counter++;
        p++;
    }

    return counter;
}
```

### Βήμα 11

Από τη main() καλέστε τη συνάρτηση **len()** µεταβιβάζοντας σε αυτή τον δείκτη **lex** και **εµφανίστε** τον **αριθµό** που επιστρέφει.

```c
#include <stdio.h>
#include <stdlib.h>

int len(char *p);

int main()
{
    int b = 5, c = 20, d;

    int *p1, *p2, *p3;

    p1 = &b;
    p2 = &c;
    p3 = &d;

    *p3 = 100;

    (*p1)++;
    (*p2)--;

    *p3 = *p1 + *p2;

    printf("b = %d, c = %d, d = %d\n", b, c, d);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);

    char *lex = "TMHMA POLITISMIKIS TEXNOLOGIAS KAI EPIKOINONIAS";

    puts(lex);

    puts(lex + 35);

    putchar(*(lex+8));

    int len_str = len(lex);

    printf("\n\nLength of string: %d\n", len_str);

    return 0;
}


int len(char *p)
{
    int counter = 0;

    while (*p != '\0')
    {
        counter++;
        p++;
    }

    return counter;
}
```
