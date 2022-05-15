# Εργαστήριο 10

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (10/05/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 10ου εργαστηρίου είναι το εξής:

- Δομές (structures)

## Άσκηση 10.1 - Καταχώριση στοιχείων σε δοµή

Θέλουµε να κρατάµε τα προσωπικά στοιχεία φοιτητών: Το Επώνυµο, το Όνοµα, την
Ηλικία, το Βάρος και το Ύψος τους.

### Βήμα 1

- Να γραφεί πρόγραµµα lab10_1.c το οποίο θα διαχειρίζεται τα προσωπικά στοιχεία φοιτητών.
- Στην αρχή του προγράµµατος και έξω από τη main() να ορίσετε µια **δοµή** µε όνοµα **prosopika_stoixeia** και κατάλληλα πεδία ώστε να µπορούν να καταχωρισθούν το **Επώνυµο**, το **Όνοµα**, η **Ηλικία**, το **Βάρος** και το **Ύψος** ενός φοιτητή.

```c
#include <stdio.h>

struct prosopika_stoixeia
{
    char epon[20];
    char onom[15];
    float weight;
    float height;
    int age;
};

int main()
{
    return 0;

}
```

### Βήμα 2

- Μέσα στη main() **δηλώστε** µια **µεταβλητή** δοµής **prosopika_stoixeia** µε όνοµα **me**.
- Στα **πεδία** της µεταβλητής δοµής **me** καταχωρίστε τα **δικά** σας προσωπικά στοιχεία.

```c
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

int main()
{
    struct prosopika_stoixeia me;

    strcpy(me.onom, "Yoda");
    strcpy(me.epon, "Yoda");
    me.height = 1.54;
    me.weight = 39;
    me.age = 19;

    return 0;
}
```

### Βήμα 3

- Κατασκευάστε µια συνάρτηση µε όνοµα **display** η οποία θα δέχεται ως παράµετρο µια µεταβλητή δοµής **prosopika_stoixeia** και θα **εµφανίζει** τα περιεχόµενα των πεδίων της στη µορφή που φαίνεται παρακάτω. Η συνάρτηση δεν θα επιστρέφει τίποτα.

```c
ΚΟΥΑΣΙΜΟ∆ΟΣ ΠΑΝΑΓΙΩΤΗΣ
======================
Hlikia:19
Baros:92.0
Ypsos:1.55
```

```c
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

    strcpy(me.onom, "Yoda");
    strcpy(me.epon, "Yoda");
    me.height = 1.54;
    me.weight = 39;
    me.age = 19;

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
```

### Βήμα 4

- Μέσα στη main() **καλέστε** τη συνάρτηση **display** µε τέτοιο τρόπο ώστε να εµφανιστούν στην οθόνη τα περιεχόµενα των πεδίων της µεταβλητής δοµής **me**.

```c
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

    strcpy(me.onom, "Yoda");
    strcpy(me.epon, "Yoda");
    me.height = 1.54;
    me.weight = 39;
    me.age = 19;

    display(me);

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
```

### Βήμα 5

- Στη **main** δηλώστε µια µεταβλητή **δείκτη** µε όνοµα **ptr** που να µπορεί να **δείχνει** σε µεταβλητές δοµής **prosopika_stoixeia**.
- Κάντε ότι είναι απαραίτητο ώστε η µεταβλητή δείκτη **ptr** να 'δείχνει' στη µεταβλητή δοµής **me**.
- Χρησιµοποιώντας τον δείκτη **ptr** εµφανίστε τα περιεχόµενα των πεδίων **Ονοµα**, **Βάρος** και **Υψος** της µεταβλητής δοµής **me**.
- Χρησιµοποιώντας τον δείκτη **ptr** αλλάξτε το περιεχόµενο του πεδίου **Ηλικία** της µεταβλητής δοµής **me** µε τιµή που θα πρέπει να **πληκτρολογήσει** ο χρήστης.
- Χρησιµοποιώντας τον δείκτη **ptr** αλλάξτε το περιεχόµενο του πεδίου **Επώνυµο** της µεταβλητής δοµής **me** µε τιµή που θα πρέπει να **πληκτρολογήσει** ο χρήστης.
- Μέσα στη main() **καλέστε** τη συνάρτηση **display** µε τέτοιο τρόπο ώστε να εµφανιστούν στην οθόνη τα περιεχόµενα των πεδίων της µεταβλητής δοµής **me**.

```c
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
```

### Βήμα 6

- Μέσα στη main() **δηλώστε** έναν πίνακα δοµών **prosopika_stoixeia** 10 θέσεων µε όνοµα **filoi**. Στη **πρώτη** και τη **τελευταία** θέση του πίνακα καταχωρίστε τα στοιχεία δύο φίλων σας.

```c
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
```

### Βήμα 7

- Στις 8 ενδιάµεσες θέσεις του πίνακα **filoi** (από τη δεύτερη µέχρι τη προ-τελευταία), καταχωρήστε ως ηλικία των φίλων σας το 19!.

```c
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
```
