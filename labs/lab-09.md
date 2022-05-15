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
