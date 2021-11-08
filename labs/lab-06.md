[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 6

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (29/03/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 6ου εργαστηρίου είναι το εξής:

- Τοπικές, καθολικές και στατικές µεταβλητές
- Συναρτήσεις µε παραµέτρους

## Άσκηση 6.1 – Κλιµακωτή γραφή προγράµµατος

Το διπλανό πρόγραµµα είναι γραµµένο χωρίς κλιµακωτή γραφή, γεγονός που δεν αναδεικνύει τη δοµή του και το κάνει δυσανάγνωστο.

```c
   #include <stdio.h>
  #include <stdlib.h> 
void disp();
   int step;
 int get();
int main()
{
step=2;
disp();
return 0;   }

void disp(){
int a,b;
printf("Aegean\n");
a=get();
b=get();
if (a==0 && b==0)
exit(0);
else
    {
int i;
   for (i=a;i<=b;i=i+step)
  {

printf("%d\n",i);
  }
}
   }

int get()
{
 int x;
 scanf("%d",&x);
return x;
   }
```

Κάντε τις απαραίτητες αλλαγές ώστε να αποκτήσει µια κλιµακωτή δοµή σύµφωνα µε όσα σας έχω δείξει και τα οποία αναλύονται στην 8η διαφάνεια.

**ΛΥΣΗ:**

```c
#include <stdio.h>
#include <stdlib.h>

void disp();
int get();

int step;

int main()
{
    step = 2;
    disp();

    return 0;
}

void disp()
{
    int a, b;

    printf("Aegean\n");
    a = get();
    b = get();
    if (a == 0 && b == 0)
        exit(0);
    else
    {
        int i;
        for (i = a; i <= b; i = i + step)
        {
            printf("%d\n", i);
        }
    }
}

int get()
{
    int x;
    scanf("%d", &x);
    return x;
}
```

## Άσκηση 6.2 – Καθολικές και τοπικές µεταβλητές

Το παρακάτω πρόγραµµα χρησιµοποιεί καθολικές µεταβλητές για να µεταβιβάζει δεδοµένα στις συναρτήσεις. Η τεχνική αυτή δεν ενδείκνυται και πολλές φορές είναι αιτία για πολλά προβλήµατα σε ένα πρόγραµµα.

```c
#include <stdio.h> 
#include <stdlib.h>

int add();
int gin();
void out();

int x, y, aa, gg;

int main()
{
    scanf("%d %d", &x, &y);
    aa = add();
    gg = gin();
    out();
    return 0;
}

int add()
{
    return x+y;
}

int gin()
{
    return x*y;
}

void out()
{
    printf("Athroisma = %d\n", aa);
    printf("Ginomeno = %d\n", gg);
}
```

Τροποποιήστε κατάλληλα το πρόγραµµα και τις συναρτήσεις, ώστε  να µη χρησιµοποιήσετε καµία καθολική µεταβλητή. Η µεταβίβαση πληροφοριών στις συναρτήσεις να γίνεται µόνο µέσω παραµέτρων.

Προσέξτε ώστε οι µεταβλητές της `main()` να µην έχουν ίδιο όνοµα µε τις παραµέτρους των συναρτήσεων.

**ΛΥΣΗ:**

```c
#include <stdio.h> 
#include <stdlib.h> 

int add(int anum1, int anum2);
int gin(int gnum1, int gnum2);
void out(int sum, int pro);

int main()
{
    int x, y, aa, gg;

    printf("Dwse duo arithmous: ");
    scanf("%d %d", &x, &y);

    aa=add(x, y);
    gg=gin(x, y);
    out(aa, gg);
    return 0;
}

int add(int anum1, int anum2)
{
    return anum1 + anum2;
}

int gin(int gnum1, int gnum2)
{
    return gnum1 * gnum2;
}

void out(int sum, int pro)
{
    printf("Athroisma = %d\n", sum);
    printf("Ginomeno = %d\n", pro);
}
```

## Άσκηση 6.3 – Στατικές µεταβλητές

Το παρακάτω πρόγραµµα καλεί την συνάρτηση `out()` τρείς φορές. Κάθε φορά η συνάρτηση εµφανίζει τον χαρακτήρα 'A' στην οθόνη.

```c
#include <stdio.h> 
#include <stdlib.h> 

void out();

int main()
{
    out();
    out();
    out();
    return 0;
}

void out()
{
    char ch;
    ch = 'A';
    printf("%c\n", ch);
}
```

Τροποποιήστε κατάλληλα τη συνάρτηση `out()` ώστε κάθε φορά που καλείται να εµφανίζει τον επόµενο χαρακτήρα. Δηλαδή τη πρώτη φορά το `'Α'`, τη δεύτερη το `'Β'`, τη τρίτη το `'C'` κ.ο.κ.

Προσέξτε αλλαγές θα κάνετε **ΜΟΝΟ** στη συνάρτηση `out()` και **ΚΑΜΙΑ** στη `main()`.

**ΛΥΣΗ:**

```c
#include <stdio.h> 
#include <stdlib.h> 

void out();

int main()
{
    out();
    out();
    out();
    return 0;
}

void out()
{
    static char ch = 'A';
    printf("%c\n", ch);
    ch++;
}
```

## Άσκηση 6.4 – Συναρτήσεις

Να γραφεί η συνάρτηση `stars()` η οποία θα εµφανίζει στην οθόνη ένα πλαίσιο από αστεράκια.
Η συνάρτηση θα έχει δύο παραµέτρους: Η πρώτη θα καθορίζει το πλάτος του πλαισίου (σε αστεράκια) και η δεύτερη το ύψος του (σε γραµµές).

```none
***********
*         *
*         *
*         *
***********
*****
*   *
*****
```

Στη περίπτωση που το πλάτος είναι <3 ή το ύψος <2 η συνάρτηση να επιστρέφει χωρίς να εµφανίζει τίποτα.

Μη ξεχάστε τη πρόσθια δήλωση της συνάρτησης.

**ΛΥΣΗ:**

```c
#include <stdio.h>
#include <stdlib.h>

void stars(int platos, int ipsos);
void showPlatos(int pPlatos);
void showIpsos(int pIpsos, int pPlatos);

int main()
{
    stars(11,5);
    stars(5,3);
    return 0;
}

void stars(int platos, int ipsos)
{
    if ((platos < 3) || (ipsos < 2)) return;
    showPlatos(platos);
    showIpsos(ipsos, platos);
    showPlatos(platos);
}

void showPlatos(int pPlatos)
{
    int i = 0;
    for(; i < pPlatos; i++)
        printf("*");
    printf("\n");
}

void showIpsos(int pIpsos, int pPlatos)
{
    int j = 0;
    for(; j < pIpsos - 2; j++)
        printf("*%*c*\n", pPlatos - 2, " ");
}
```
