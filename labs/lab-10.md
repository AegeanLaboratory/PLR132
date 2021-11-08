[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

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

## Ορισµός µιας δοµής (structure)

```c
struct όνομα_δομής
{
    Δηλώσεις πεδίων δομής;
};
```

- Μια δοµή είναι συνήθως µια λογική ενότητα από πληροφορίες που σχετίζονται
µεταξύ τους.
- Μια **δοµή** αποτελείται από επιµέρους πληροφορίες, οι οποίες καλούνται **πεδία**.
- Τα **πεδία** µιας δοµής µπορεί να είναι **µεταβλητές**, **πίνακες** ακόµα και άλλες **δοµές**.
- Μια δοµή ορίζεται µε την πρόταση **struct**!

## 1o Παράδειγµα δοµής

Στον παρακάτω κώδικα δημιουργούμε:

- μια δομή με όνομα `foitites`
- πεδία δομής το `epon`, `onom`, `am`, `et` και `ex`'

```c
struct foitites
{
    char epon[20];
    char onom[15];
    char am[8];
    int et;
    int ex;
};
```

- Τα **πεδία** µιας δοµής µπορεί να είναι µεταβλητές, πίνακες ακόµα και άλλες δοµές.
- Η δήλωση µιας δοµής κατά κάποιο τρόπο **δηµιουργεί** έναν **νέο τύπο** δεδοµένων!
- Η δήλωση µιας δοµής **δεν** συνεπάγεται και τη δηµιουργία µεταβλητών αυτής της δοµής. Αρχικά η δοµή είναι µια έννοια η οποία παίρνει υπόσταση **µόνο** µε τη **δήλωση µεταβλητών** της δοµής.

## 2o Παράδειγµα δοµής

```c
#include <stdio.h>
#include <stdlib.h>

struct foitites
{
    char epon[20];
    char onom[15];
    char am[8];
    int et;
    int ex;
};

.....

int main()
{
    struct foitites student_a,student_b;
    .....
    return 0;
}
```

## 3o Παράδειγµα δοµής

```c
.....
strcpy(student_a.epon,"ΧΛΑΠΑΤΣΟΓΛΟΥ");
strcpy(student_a.onom,"ΑΠΟΣΤΟΛΟΣ");
strcpy(student_a.am,"CT10115");
student_a.et=1993;
student_a.ex=1;
strcpy(student_b.epon,"ΑΣΤΡΟΠΕΛΕΚΗ");
strcpy(student_b.onom,"ΜΑΡΙΑ");
strcpy(student_b.am,"CT07182");
student_b.et=1990;
student_b
.....
```

## ∆ήλωση µεταβλητών-δοµής

Στο παρακάτω πρόγραμμα:

- ∆ηλώνουμε μία δοµή. Συνήθως τις δοµές
τις δηλώνουµε πριν από τη main()
ώστε να είναι γνωστές σε όλο το
πρόγραµµα. ∆ιαφορετικά θα είναι
γνωστές µόνο µέσα στη συνάρτηση
που δηλώθηκαν.
- ∆ηλώνουμε µεταβλητές-δοµής µαζί µε
την δήλωση της δοµής. Η εµβέλεια
τους είναι σε όλο το πρόγραµµα.
- ∆ηλώνουμε µεταβλητές-δοµής σε
ξεχωριστή πρόταση. Η εµβέλειά τους
είναι µόνο στη main.

```c
#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    float plevra_a;
    float plevra_b;
    char xroma[10];
} rec1,rec2;

.....

int main()
{
    int a,b;
    struct rectangle rec3,rec4;
    .....
    return 0;
}
```

Ο χώρος εµβέλειας των µεταβλητών-δοµής είναι ίδιος µε αυτός των απλών µεταβλητών και εξαρτάται από την θέση στην οποία δηλώθηκαν. Στο συγκεκριµένο παράδειγµα οι µεταβλητές δοµής
**rec1** και **rec2** έχουν **καθολική** εµβέλεια ενώ οι **rec3** και **rec4 τοπική** εµβέλεια µόνο µέσα στη συνάρτηση main().

## Πρόσβαση στα πεδία µιας µεταβλητής-δοµής

```c
struct rectangle{
    float plevra_a;
    float plevra_b;
    char xroma[10];

};
```

- ∆ηµιουργία µιας µεταβλητής δοµής **rectangle**

```c
struct rectangle rec1 ;
```

- Μεταβλητή δοµής **rectangle**

```c
rec1.plevra_a = 10 ;
rec1.plevra_b = 20
strcpy(rec1.xroma,"prasino")
```

Η πρόσβαση στα πεδία µιας µεταβλητής-δοµής γίνεται µέσω του τελεστή τελεία (.) µε µια παράσταση
της µορφής **ονοµα_µεταβλητής_δοµής**.

## Πίνακες δοµών

Στο παρακάτω κομμάτι κώδικα:

- Καταχωρίζουμε το όνοµα και το τηλέφωνo στα **πεδία onoma** και **thl** της δοµής
**`pelates[1]`**.
- Καταχωρίζουμε το 25 στο **πεδίο ilikia** της δοµής **`pelates[1]`**.

```c
struct stoixeia
{
    char onoma[15];
    char address[20];
    char thl[13];
    int ilikia;
};
.......
.......
struct stoixeia pelates[100];
strcpy(pelates[1].onoma,”ΠΕΤΡΟΥ”);
strcpy(pelates[1].thl,”2651821”);
pelates[1].ilikia=25;
```

## Χρήση του τελεστή sizeof σε τύπους δεδοµένων δοµής

```c
#include <stdio.h>
#include <stdlib.h>

struct foitites
{
    char epon[20];
    char onom[15];
    char am[8];
    int et;
    int ex;
};

.....

int main()
{
    struct foitites student_a,student_b;
    .....
    return 0;
}
```

- **sizeof(foitites)**:

Αποδίδει το µέγεθος του τύπου δοµής
**foitites** που είναι **51** &rarr; (20+15+8+4+4)

- **sizeof(student_b)**:

Αποδίδει το µέγεθος του τύπου δοµής
**student_b** που είναι **51**

Ο τελεστής **sizeof** αποδίδει το µέγεθος ενός τύπου δοµής ή µιας µεταβλητής δοµής. Το µέγεθος µιας
δοµής υπολογίζεται ως το **άθροισµα** των bytes που καταλαµβάνουν τα **πεδία** της δομής!

## ∆ιεύθυνση µιας µεταβλητής δοµής και ενός πεδίου της

```c
struct rectangle
{
    float plevra_a;
    float plevra_b;
    char xroma[10];
};
```

- ∆ηµιουργία µιας µεταβλητής δοµής **rectangle**

```c
struct rectangle rec1 ;
```

`&rec1` &rarr; 5000
`&rec1.pleyra_a` &rarr; 5000
`&rec1.pleyra_b` &rarr; 5004
`rec1.xroma` &rarr; 5008

```c
scanf("%f",&rec1.plevra_a) ;
scanf("%f",&rec1.plevra_b) ;
gets(rec1.xroma) ;
```

Ο τελεστής & αποδίδει τη διεύθυνση µιας µεταβλητής δοµής αλλά και ενός επί µέρους της µεταβλητής. Η διεύθυνση µιας µεταβλητής δοµής είναι η διεύθυνση του πρώτου από τα byte που καταλαµβάνει.

## Μεταβίβαση δοµών σε συναρτήσεις

```c
struct test
{
    char x;
    int y;
    double z;
    char lex[25];
};

void func(struct test p)
{
    printf("%c\n",p.x);
    printf("%d\n",p.y);
    printf("%f\n",p.z);
    printf("%s\n",p.lex);
}

int main()
{
    struct test first;
    first.x='A';
    first.y=120;
    first.z=3.145678;
    strcpy(first.lex,"Η C υποστηρίζει δοµές");
    func(first);
    .....
```

Όταν ως παράµετρος µιας συνάρτησης χρησιµοποιείται µια δοµή, τότε οι τιµές όλων των πεδίων της δοµής µεταβιβάζονται στα αντίστοιχα πεδία της τυπικής παραµέτρου της συνάρτησης. Αυτό φυσικά
προϋποθέτει ότι η τυπική παράµετρος της συνάρτησης θα έχει την ίδια δοµή µε το όρισµα µε το οποίο
καλείται.

## ∆είκτες σε δοµές

Στο παρακάτω πρόγραμμα:

- Ο δείκτης **ptr** δείχνει σε
δοµές τύπου **test**.
- Στο δείκτη **ptr** ανατίθεται η **διεύθυνση** της µεταβλητής δοµής **first**.

```c
struct test
{
    char x;
    int y;
    double z;
    char lex[12];
};

int main()
{
    struct test first,*ptr;
    first.x='A';
    strcpy(first.lex,"Μυτιλήνη");
    ptr=&first;
    .....
}
```

Ένας **δείκτης σε δοµή**, δηλώνεται όπως οι υπόλοιποι δείκτες (µε ένα * πριν το όνοµα του). Σε ένα δείκτη δοµής µπορούµε να καταχωρίσουµε τη **διεύθυνση** µιας **µεταβλητής δοµής** του ιδίου τύπου µε τον δείκτη.
Η **διεύθυνση** µιας µεταβλητής δοµής είναι η διεύθυνση του **πρώτου** από τα bytes που καταλαµβάνει η µεταβλητή. Η διεύθυνση αποδίδεται µε τον τελεστή **&** όπως και στις µεταβλητές άλλου τύπου.

## Πρόσβαση στα πεδία µιας δοµής µέσω ενός δείκτη

- Ο δείκτης **ptr** δείχνει σε δοµές τύπου **test**.
- Με χρήση του **τελεστή αναφοράς** `*`. Έτσι, η `(*ptr).x` αναφέρεται στο πεδίο x της µεταβλητής first, H πρόταση: `(*ptr).x='C';` καταχωρίζει το χαρακτήρα 'C' στο πεδίο x της δοµής στην οποία **δείχνει** ο δείκτης ptr.
- Με χρήση του **τελεστή βέλους** `&rarr;` (παύλα και >) ο οποίος αντικαθιστά τον κλασικό τρόπο αναφοράς όταν πρόκειται για δοµές. Η παράσταση `(*ptr).x` είναι ισοδύναµη µε την παράσταση `ptr->x`.

```c
}
struct test
{
    char x;
    int y;
    double z;
    char lex[12];
};

int main()
{
    struct test first,*ptr;
    first.x='A';
    strcpy(first.lex,"Μυτιλήνη");
    ptr=&first;
    (*ptr).x='C';
    ptr->x='K';
    ptr->y=25;
    gets(ptr->lex);
.....
}
```

Ο τελεστής αναφοράς σπάνια χρησιµοποιείται όταν πρόκειται για δείκτες σε δοµές. O συνήθης
τρόπος αναφοράς σε δοµή µέσω δείκτη γίνεται µε χρήση του **τελεστή βέλους** &rarr;. Η παράσταση **ptr->x** είναι ισοδύναµη µε την παράσταση **(*ptr).x**, και η **gets(ptr->lex)** µε την
**gets((*ptr).lex);**

## Πρόσβαση στα πεδία µιας δοµής άµεσα ή έµµεσα (µέσω δείκτη) και αριθµητική των δεικτών δοµής

Στο παρακάτω πρόγραμμα:

- Ο δείκτης **ptr** δείχνει σε
δοµές τύπου **test**.
- Στο δείκτη **ptr** ανατίθεται η **διεύθυνση** της µεταβλητής δοµής **first**.

Έχουμε επίσης:

- **Άµεση** πρόσβαση στα πεδία της δοµής first.
- **Έµµεση** πρόσβαση στα πεδία της δοµής first, µέσω του **δείκτη ptr** και το **τελεστή βέλους** &rarr;.
- H παράσταση **ptr++ αυξάνει** τον δείκτη ptr κατά **25**! (όσο το µέγεθος του τύπου δοµής test 1+4+8+12)

```c
struct test
{
    char x;
    int y;
    double z;
    char lex[12];
};
int main()
{
    struct test first,*ptr;
    ptr=&first;
    first.x='A';
    strcpy(first.lex,"Μυτιλήνη");
    ptr->x='Α';
    strcpy(ptr->lex,"Μυτιλήνη");
    ptr++;
}
```

Η αύξηση ενός δείκτη (που δείχνει σε δεδοµένα τύπου δοµής) κατά 1, **αυξάνει** την τιµή του δείκτη τόσο, **όσο το µέγεθος** του συγκεκριµένου τύπου δοµής σε byte.
