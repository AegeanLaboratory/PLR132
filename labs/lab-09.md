[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 9

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (19/04/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 9ου εργαστηρίου είναι το εξής:

- Πίνακες
- Πίνακες χαρακτήρων για την αποθήκευση συµβολοσειρών
- Μεταβίβαση πινάκων σε συναρτήσεις
- Ταξινόµηση πίνακα

## Άσκηση 9.1 - Μετοχή

Αντικείµενο του σηµερινού προγράµµατος είναι η καταχώριση και επεξεργασία των τιµών µιας µετοχής του χρηµατιστηρίου.

### Βήμα 1

Να γραφεί πρόγραµµα το οποίο θα ζητάει να πληκτρολογήσουµε α) το όνοµα της µετοχής (π.χ ΝΕΛ) καθώς και τις 10 διαφορετικές τιµές που έκλεισε η µετοχή στις τελευταίες 10 συνεδριάσεις του Χρηµατιστηρίου Αθηνών. Το όνοµα της µετοχής καθώς και οι τιµές της, θα πρέπει να καταχωρίζονται σε κατάλληλους πίνακες. Αυτά θα γίνονται στη συνάρτηση main().

```c
#include <stdio.h>

int main()
{
    char name_stock[10];
    float stock_price[10];
    int i;

    printf("Dwse to onoma tis metoxis: ");
    fgets(name_stock, 10, stdin);

    for(i = 0; i < 10; i++)
    {
        printf("Dwse timi %d sunedriasis: ", (i+1));
        scanf("%f", &stock_price[i]);
    }
    return 0;
}
```

### Βήμα 2

Να φτιαχτεί µια συνάρτηση η οποία θα εµφανίζει το όνοµα και τις 10 τιµές της µετοχής. Η κάθε τιµή πρέπει να εµφανίζεται µε 2 δεκαδικά ψηφία. Σκεφτείτε τις παραµέτρους που πρέπει να έχει η συνάρτηση. Επιλέξτε κατάλληλο όνοµα και τύπο για τη συνάρτηση. Η συνάρτηση να καλείται από τη main() για να εµφανίζει τις τιµές της µετοχής. Η εµφάνιση θα πρέπει να είναι όπως παρακάτω:

```c
NEL
==========
12.44
5.50
11.33
.....
```

```c
#include <stdio.h>

void display(char name[], float price[]);

int main()
{
    char name_stock[10];
    float stock_price[10];
    int i;

    printf("Dwse to onoma tis metoxis: ");
    fgets(name_stock, 10, stdin);

    for(i = 0; i < 10; i++)
    {
        printf("Dwse timi %d sunedriasis: ", (i+1));
        scanf("%f", &stock_price[i]);
    }

    display(name_stock, stock_price);

    return 0;
}

void display(char name[], float price[])
{
    int k;

    printf("\n%s", name);
    puts("==========");

    for(k = 0; k < 10; k++)
    {
        printf("%.2f\n", price[k]);
    }
}
```

### Βήμα 3

Καταστρώστε µια νέα συνάρτηση η οποία θα βρίσκει και θα επιστρέφει τη µέγιστη τιµή της µετοχής. Στη συνάρτηση θα µεταβιβάζεται µόνο ο πίνακας των τιµών. Η κλήση της συνάρτησης και η εµφάνιση της µέγιστης τιµής θα γίνεται από τη main(). Επιλέξτε κατάλληλο όνοµα και τύπο για τη συνάρτηση.

```c
#include <stdio.h>

void display(char name[], float price[]);
float max(float pStock[]);

int main()
{
    char name_stock[10];
    float stock_price[10];
    int i;

    printf("Dwse to onoma tis metoxis: ");
    fgets(name_stock, 10, stdin);

    for(i = 0; i < 10; i++)
    {
        printf("Dwse timi %d sunedriasis: ", (i+1));
        scanf("%f", &stock_price[i]);
    }

    display(name_stock, stock_price);
    printf("\nH megisti timi tis metoxis einai: %.2f\n", max(stock_price));

    return 0;
}

void display(char name[], float price[])
{
    int k;

    printf("\n%s", name);
    puts("==========");

    for(k = 0; k < 10; k++)
    {
        printf("%.2f\n", price[k]);
    }
}

float max(float pStock[])
{
    float max_s;
    int j;

    max_s = pStock[0];

    for(j = 0; j < 10; j++)
    {
        if (pStock[j] > max_s)
            max_s = pStock[j];
    }

    return max_s;
}
```

### Βήμα 4

Θέλουµε να εµφανίσουµε τις τιµές της µετοχής µε φθίνουσα σειρά. Για το σκοπό αυτό θα χρησιµοποιήσουµε τη συνάρτηση bubble_sort() που βρίσκεται πιο κάτω. Αντιγράψτε τη συνάρτηση κάτω από τη main(). ∆είτε µήπως χρειάζεται να κάνουµε κάποιες µετατροπές στη συνάρτηση για να συµβαδίζει µε τις απαιτήσεις του υπόλοιπου προγράµµατος. Καλέστε τη συνάρτηση από τη main() µε τέτοιο τρόπο ώστε να ταξινοµήσει τον πίνακα των τιµών. Ακόλουθα πάλι από τη main() καλέστε τη συνάρτηση που φτιάξατε στο βήµα-2 για να διαπιστώσετε αν ο πίνακας έχει ταξινοµηθεί. Μη ξεχάστε τη πρόσθια δήλωση της συνάρτησης.

```c
#include <stdio.h>

void display(char name[], float price[]);
float max(float pStock[]);
void bubble_sort(float sort[], int n);

int main()
{
    char name_stock[10];
    float stock_price[10];
    int i;

    printf("Dwse to onoma tis metoxis: ");
    fgets(name_stock, 10, stdin);

    for(i = 0; i < 10; i++)
    {
        printf("Dwse timi %d sunedriasis: ", (i+1));
        scanf("%f", &stock_price[i]);
    }

    display(name_stock, stock_price);
    printf("\nH megisti timi tis metoxis einai: %.2f\n", max(stock_price));

    bubble_sort(stock_price, 10);
    display(name_stock, stock_price);

    return 0;
}

void display(char name[], float price[])
{
    int k;

    printf("\n%s", name);
    puts("==========");

    for(k = 0; k < 10; k++)
    {
        printf("%.2f\n", price[k]);
    }
}

float max(float pStock[])
{
    float max_s;
    int j;

    max_s = pStock[0];

    for(j = 0; j < 10; j++)
    {
        if (pStock[j] > max_s)
            max_s = pStock[j];
    }

    return max_s;
}

void bubble_sort(float sort[], int n)
{
    int x, p;
    float temp;

    for(p = 1; p <= n-1; p++)
    {
        for (x = n-1; x >= p; x--)
        {
            if (sort[x] > sort[x-1])
            {
                temp = sort[x];
                sort[x] = sort[x-1];
                sort[x-1] = temp;
            }
        }
    }
}
```

### Βήμα 5

Μέχρι στιγµής το πρόγραµµά σας αποθηκεύει και επεξεργάζεται στοιχεία για 10 τιµές της µετοχής! Τροποποιήστε το πρόγραµµα µε τέτοιο τρόπο ώστε από τη στιγµή που το τροποποιήστε κατάλληλα
και µετά, µε **ΜΙΑ ΜΟΝΟ** αλλαγή να µετατρέπεται σε πρόγραµµα για επεξεργασία 5, 20 ή οποιουδήποτε αριθµού τιµών. Μόλις ολοκληρώστε την τροποποίηση, µε µία µόνο αλλαγή κάντε το να δουλεύει για 5 τιµές!

```c
#include <stdio.h>

#define SIZE 5

void display(char name[], float price[]);
float max(float pStock[]);
void bubble_sort(float sort[], int n);

int main()
{
    char name_stock[10];
    float stock_price[SIZE];
    int i;

    printf("Dwse to onoma tis metoxis: ");
    fgets(name_stock, 10, stdin);

    for(i = 0; i < SIZE; i++)
    {
        printf("Dwse timi %d sunedriasis: ", (i+1));
        scanf("%f", &stock_price[i]);
    }

    display(name_stock, stock_price);

    printf("\nH megisti timi tis metoxis einai: %.2f\n", max(stock_price));

    bubble_sort(stock_price, SIZE);
    display(name_stock, stock_price);

    return 0;
    }

    void display(char name[], float price[])
    {
    int k;

    printf("\n%s", name);
    puts("==========");

    for(k = 0; k < SIZE; k++)
    {
        printf("%.2f\n", price[k]);
    }
    }

    float max(float pStock[])
    {
    float max_s;
    int j;

    max_s = pStock[0];

    for(j = 0; j < SIZE; j++)
    {
        if (pStock[j] > max_s)
            max_s = pStock[j];
    }

    return max_s;
    }

    void bubble_sort(float sort[], int n)
    {
    int x, p;
    float temp;

    for(p = 1; p <= n-1; p++)
    {
        for (x = n-1; x >= p; x--)
        {
            if (sort[x] > sort[x-1])
            {
                temp = sort[x];
                sort[x] = sort[x-1];
                sort[x-1] = temp;
            }
        }
    }
}
```

**Προσέξτε τα παρακάτω...**

- Μετά από κάθε βήµα δοκιµάζετε το πρόγραµµά σας ώστε να διαπιστώστε ότι
τουλάχιστον µέχρι το σηµείο αυτό δουλεύει!
- **Μην ξεχάστε την πρόσθια δήλωση**. Αν οι συναρτήσεις σας ορίζονται µετά από τη
main(), θα πρέπει να δηλωθούν και πριν από αυτή (µόνο το πρότυπο της συνάρτησης χωρίς το σώµα της).

## ∆ήλωση ενός πίνακα

Η πρόταση δήλωσης ενός πίνακα είναι όπως και οι προτάσεις δήλωσης των υπόλοιπων µεταβλητών. Η µόνη διαφορά είναι ότι δηλώνονται και οι διαστάσεις του πίνακα, κάθε µία µέσα σε τετραγωνικές αγκύλες.

Το παρακάτω κομμάτι κώδικα δηµιουργεί δύο πίνακες τύπου int και µια απλή µεταβλητή (c). Ο πίνακας d είναι µιας διάστασης 20 θέσεων και πίνακας b, δύο διαστάσεων 600 θέσεων.

```c
int d[20], b[100][6], c;
```

Το παρακάτω κομμάτι κώδικα δηµιουργεί έναν πίνακα τύπου float, µιας διάστασης 1000 θέσεων.

```c
float posa[1000];
```

Το παρακάτω κομμάτι κώδικα δηµιουργεί έναν πίνακα χαρακτήρων (char), µιας διάστασης 100 θέσεων.

```c
char frasi[100];
```

Το παρακάτω κομμάτι κώδικα δηµιουργεί έναν πίνακα τύπου  double, δύο διαστάσεων 1000 θέσεων.

```c
double bathmoi[100][10];
```

- Όλες οι θέσεις ενός πίνακα είναι του ιδίου τύπου (π.χ όλες int, float κ.λ.π)
- Κάθε διάσταση ενός πίνακα **ξεκινάει** από το **0**. ∆ηλαδή η πρώτη θέση µνήµης ενός πίνακα int `a[10]` είναι η `a[0]` και η τελευταία η `a[9]`.
- Από τη στιγµή που θα δηµιουργηθεί ένας πίνακας, δεν µπορούµε να µεταβάλουµε το µέγεθός του. Οι πίνακες είναι **στατικές** δοµές δεδοµένων.
- Το συνολικό πλήθος των θέσεων ενός πίνακα, προκύπτει από το γινόµενο των διαστάσεών του. Π.χ ο πίνακας int `a[4][5][6]` έχει 120 θέσεις µνήµης.

## Παραδείγµατα επεξεργασίας σε πίνακες 1∆

Το παρακάτω πρόγραμμα:

- Καταχωρεί έναν τυχαίο αριθµό σε όλες τις θέσεις µνήµης του πίνακα a.
- Εµφανίζει στην οθόνη τα περιεχόµενα του πίνακα a.
- Υπολογίζει και εµφανίζει το άθροισµα όλων των θέσεων µνήµης του πίνακα a.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i, ss=0;
    .....
    for (i = 0; i < 10;i++)
        a[i] = rand();
    .....
    for (i = 0; i < 10; i++)
        printf("%d\n", a[i]);
    .....
    for (i = 0; i < 10; i++)
        ss = ss + a[i];
        printf("%d\n", ss);
    return 0;
}
```

## Πίνακες χαρακτήρων

To παρακάτω κομμάτι κώδικα δηλώνει έναν πίνακα χαρακτήρων 10 θέσεων και
καταχωρίζει σε αυτόν τη συµβολοσειράς "MYTILINI"

```c
char lex[10] = "MYTILINI";
```

To παρακάτω κομμάτι κώδικα εµφανίζει τον 3ο χαρακτήρα στην οθόνη και µετά τον
αντικαθιστά µε τον χαρακτήρα 'Ν'

```c
putch(lex[2]);
lex[2] = 'N';
```

- Σε έναν πίνακα χαρακτήρων αποθηκεύεται ένα σύνολο χαρακτήρων (µια συµβολοσειρά)
- Σε έναν πίνακα χαρακτήρων κάθε θέση µνήµης του πίνακα περιέχει έναν µόνο χαρακτήρα.
- Σε έναν πίνακα χαρακτήρων το σύνολο χαρακτήρων τερµατίζεται µε τον χαρακτήρα τερµατισµού '\0'.

## Μεταβίβαση πινάκων 1∆ σε συναρτήσεις

Στον παρακάτω κώδικα:

- στη συνάρτηση display() µεταβιβάζεται η διεύθυνση του πίνακα a[].
- η συνάρτηση display() έχει πρόσβαση στον πίνακα a[] της main(), µεσω του p[].

```c
#include <stdio.h>
#include <stdlib.h>

void display(int p[10]);

int main()
{
    int a[10], i;
    
    for (i = 0; i < 10; i++)
        a[i] = rand();
    display(a);
    return 0;
}

void display(int p[10])
{
    int k;
    for (k = 0; k < 10; k++)
        printf("%d\n", p[k]);
}
```

- Στη main() δηµιουργείται ο πίνακας α 10 θέσεων και γεµίζει µε 10 τυχαίους αριθµούς. Η συνάρτηση display() εµφανίζει τα περιεχόµενα του πίνακα a. Στη συνάρηση **µεταβιβάζεται η διεύθυνση** του πίνακα.
- Για τη µεταβίβαση ενός πίνακα µιας διάστασης η αντίστοιχη παράµετρος της συνάρτησης µπορεί να είναι ένας πίνακας **ιδίου τύπου και µεγέθους**.
- Η παράµετρος-πίνακας **δεν δεσµεύει** χώρο για τις θέσεις µνήµης του παρά µόνο δηµιουργεί έναν δείκτη µε όνοµα το όνοµα του πίνακα της παραµέτρου.

## Υλοποίηση µεθόδου bubble sort µε συνάρτηση

Στο παρακάτω πρόγραμμα:

- Στη παράµετρο **pin** µεταβιβάζεται ο πίνακας που θέλουµε να ταξινοµηθεί.
- Στη παράµετρο **n** µεταβιβάζεται
το πλήθος των θέσεων µνήµης του πίνακα.

```c
void bubble_sort(int pin[], int n)
{
    int i, p, temp;
    
    for (p = 1; p <= n-1; p++)
    {
        for (i = n-1; i >= p; i--)
        {
            if (pin[i] < pin[i-1])
            {
                temp = pin[i];
                pin[i] = pin[i-1];
                pin[i-1] = temp;
            }
        }
    }
}
```

Η παραπάνω συνάρτηση υλοποιεί τον αλγόριθµο bubble sort για την **αύξουσα**
ταξινόµηση ενός πίνακα **n** θέσεων µιας διάστασης. Στη συνάρτηση µεταβιβάζεται ο πίνακας που θέλουµε να ταξινοµηθεί καθώς και το πλήθος των θέσεων µνήµης του. Για **φθίνουσα** ταξινόµηση αντικαθιστούµε τη σύγκριση µε **pin[i]>pin[i-1]**!


