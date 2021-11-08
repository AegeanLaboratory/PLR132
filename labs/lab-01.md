[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 1

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (22/02/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 1ου εργαστηρίου είναι το εξής:

- Εξοικείωση µε το περιβάλλον του DEV C++
- Συγγραφή προγράµµατος
- Αποθήκευση
- Εκτέλεση προγράµµατος
- Εκτελέσιµα αρχεία

## Άσκηση 1.1

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ar, ta;
    srand(time(NULL));
    ta = rand() % 1000 + 1;
    do
    {
        printf("Dose enan arithmo apo to 1 mexri to 1000 >");
        scanf("%d", &ar);
        if (ar > ta) 
            printf("Pio mikros\n");
        else if (ar < ta) 
            printf("Pio megalos\n");
    } while (ta != ar);
    
    printf("BRAVO to brikes\n");
    
    return 0;
}
```

## Άσκηση 1.2 - Το πρώτο σας πρόγραµµα στη C

### Βήμα 1

∆ηµιουργήστε ένα νέο πηγαίο αρχείο. Γράψτε µέσα τις βασικές προτάσεις που διαθέτει
οποιοδήποτε πρόγραµµα στη C.

Αποθηκεύστε το αρχείο µε όνοµα `first` ως C source file!

```c
#include <stdio.h>

int main()
{
    return 0;
}
```

### Βήμα 2

Μέσα στη συνάρτηση main() βάλτε ΜΙΑ πρόταση η οποία να εµφανίζει το όνοµά σας και
το επιθετό σας σε διαφορετική γραµµή το καθένα. Μεταγλωττίστε και εκτελέστε.

```c
#include <stdio.h>

int main()
{
    printf("Yoda\n");
    
    return 0;
}
```

### Βήμα 3

Μέσα στη συνάρτηση main() προσθέστε τις κατάλληλες προτάσεις οι οποίες να δηλώνουν
τρεις µεταβλητές για αποθήκευση ακέραιων αριθµών και µία για αποθήκευση χαρακτήρα.

```c
#include <stdio.h>

int main()
{
    int a, b, c;
    char ch;
    
    printf("Yoda\n");
    
    return 0;
}
```

### Βήμα 4

Μέσα στη συνάρτηση main() προσθέστε τις κατάλληλες προτάσεις οι οποίες να
καταχωρίζουν στις δύο πρώτες ακέραιες µεταβλητές το 10 και το 20 και στη µεταβλητή
χαρακτήρα το 'C'. Προσθέστε µια ακόµη πρόταση η οποία θα καταχωρίζει στην τρίτη
ακέραια µεταβλητή το άθροισµα των δύο πρώτων. Μεταγλωττίστε και εκτελέστε.

```c
#include <stdio.h>

int main()
{
    int a, b, c;
    char ch;
    
    a = 10;
    b = 20;
    ch = 'C';
    c = a + b;
    printf("Yoda\n");
    
    return 0;
}
```

### Βήμα 5

Μέσα στη συνάρτηση main() βάλτε ΜΙΑ πρόταση η οποία να εµφανίζει τα περιεχόµενα
και των τεσσάρων µεταβλητών. Μεταγλωττίστε και εκτελέστε.

```c
#include <stdio.h>

int main()
{
    int a, b, c;
    char ch;
    
    a = 10;
    b = 20;
    ch = 'C';
    
    c = a + b;
    
    printf("Yoda\n");
    printf("\n%d %d %d %c\n", a, b, c, ch);
    
    return 0;
}
```
