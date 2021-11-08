[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Εργαστήριο 2

Το εργαστηριακό μάθημα αυτό είναι απο τη σημερινή παρουσίαση (01/03/2021) που μας έκανε ο κ. Νίκος Μ. Χατζηγιαννάκης (Πανεπιστήμιο ΑΙΓΑΙΟΥ). Το περιεχόμενο του 2ου εργαστηρίου είναι το εξής:

- To πρώτο σας πρόγραμμα σε C. Υπολογισμός και εμφάνιση μέσου όρου βαθμών.
- Τροποποίηση του προγράμματος
- Χρήση των συναρτήσεων `printf()` και `scanf()`
- Χρήση της οδηγίας define
- Εντοπισμός και διόρθωση λαθών
- Χρήση χαρακτήρων

## Άσκηση 2.1 - Υπολογισμός μέσου όρου

Πληκτρολογήστε τον παρακάτω κώδικα του προγράμματος (ή αντιγράψτε τον με copy-
paste). Προσέχουμε τις εσοχές ώστε ο κώδικας να είναι ευανάγνωστος. Αποθηκεύστε τον σε ένα αρχείο με όνομα *lab2_1.c* στην επιφάνεια εργασίας σας. Μεταγλωττίστε και εκτελέστε το πρόγραμμα.

```c
#include <stdio.h>

int main()
{
    float b1, b2, b3;
    float mo;

    b1 = 8;
    b2 = 5.5;
    b3 = 6.5;

    mo = (b1 + b2 + b3) / 3;

    printf("o mesos oros einai: %f\n", mo);

    return 0;
}
```

## Τροποποιήστε το πρόγραμμα ώστε ...

### Βήμα 1

Να βρίσκει και να υπολογίζει τον μέσο όρο **τεσσάρων** βαθμών. Χρησιμοποιήστε ένα κατάλληλο όνομα και τύπο μεταβλητής στην οποία να καταχωρήστε ως τέταρτο βαθμό το 10. Μεταγλωττίστε και εκτελέστε το πρόγραμμα!

```c
#include <stdio.h>

int main()
{
    float b1, b2, b3, b4;
    float mo;

    b1 = 8;
    b2 = 5.5;
    b3 = 6.5;
    b4 = 10;

    mo = (b1 + b2 + b3 + b4) / 4;

    printf("o mesos oros einai: %f\n", mo);

    return 0;
}
```

### Βήμα 2

Με την οδηγία **define**, αναθέστε σε μια σταθερά με όνομα **USER** το **ονοματεπώνυμό** σας με λατινικούς χαρακτήρες. Με τη κατάλληλη πρόταση εμφανίστε κάτω από τα αποτελέσματα το ονοματεπώνυμο σας κάνοντας χρήση της σταθεράς USER. Μεταγλωττίστε και εκτελέστε το πρόγραμμα!

```c
#include <stdio.h>

#define USER "Yoda\n"

int main()
{
    float b1, b2, b3, b4;
    float mo;

    b1 = 8;
    b2 = 5.5;
    b3 = 6.5;
    b4 = 10;

    mo = (b1 + b2 + b3 + b4) / 4;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);

    return 0;
}
```

### Βήμα 3

Χρησιμοποιήστε ένα  κατάλληλο όνομα και τύπο μεταβλητής στην οποία να καταχωρήστε το έτος γέννησής σας. Σε μια άλλη μεταβλητή να υπολογίζεται και να καταχωρίζεται η ηλικία σας. Τροποποιήστε κατάλληλα το πρόγραμμα ώστε σε μια νέα γραμμή να εμφανίζεται η φράση "Hlikia :" και αμέσως δίπλα η ηλικία που υπολογίσατε.Μεταγλωττίστε και εκτελέστε το πρόγραμμα!

```c
#include <stdio.h>

#define USER "Yoda\n"

int main()
{
    float b1, b2, b3, b4;
    float mo;
    int etos_gennisis, ilikia;

    b1 = 8;
    b2 = 5.5;
    b3 = 6.5;
    b4 = 10;

    mo = (b1 + b2 + b3 + b4) / 4;
    etos_gennisis = 2002;
    ilikia = 2021 - etos_gennisis;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);
    printf("Hlikia: %d\n", ilikia);

    return 0;
}
```

### Βήμα 4

Τροποποιήστε το πρόγραμμα ώστε το έτος γέννησης να ζητείται από τον χρήστη μέσω της συνάρτησης scanf(). Προσθέστε επίσης μια κατάλληλη πρόταση, πριν από την scanf(),ώστε το πρόγραμμα να ενημερώνει τον χρήστη για το τι πρέπει να πληκτρολογήσει.Μεταγλωττίστε και εκτελέστε το πρόγραμμα!

```c
#include <stdio.h>

#define USER "Yoda\n"

int main()
{
    float b1, b2, b3, b4;
    float mo;
    int etos_gennisis, ilikia;

    b1 = 8;
    b2 = 5.5;
    b3 = 6.5;
    b4 = 10;

    mo = (b1 + b2 + b3 + b4) / 4;
    
    printf("Dose etos gennisis: ");
    scanf("%d", &etos_gennisis);

    ilikia = 2021 - etos_gennisis;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);
    printf("Hlikia: %d\n", ilikia);

    return 0;
}
```

### Βήμα 5

Τροποποιήστε το πρόγραμμα ώστε και οι τέσσερις βαθμοί να ζητούνται από το χρήστη  
μέσω της συνάρτησης `scanf()`. Προσθέστε επίσης μια κατάλληλη πρόταση, πριν από την `scanf()`, ώστε το πρόγραμμα να εμφανίζει το μήνυμα "Dose 4 bathmoys" και να αφήνει μετά τρεις κενές γραμμές. Μεταγλωττίστε και εκτελέστε το πρόγραμμα!

```c
#include <stdio.h>

#define USER "Yoda\n"

int main()
{
    float b1, b2, b3, b4;
    float mo;
    int etos_gennisis, ilikia;

    printf("Dose 4 bathmoys\n\n\n");
    scanf("%f %f %f %f", &b1, &b2, &b3, &b4);

    mo = (b1 + b2 + b3 + b4) / 4;
    
    printf("Dose etos gennisis: ");
    scanf("%d", &etos_gennisis);

    ilikia = 2021 - etos_gennisis;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);
    printf("Hlikia: %d\n", ilikia);

    return 0;
}
```

### Βήμα 6

Τροποποιήστε τη `scanf()` του προηγούμενου βήματος ώστε ο χρήστης να πρέπει ανάμεσα στους βαθμούς να πληκτρολογεί και μια παύλα. Δηλαδή να δίνει τους τέσσερις βαθμούς στη μορφή 8-5.5-6.5-9. Μεταγλωττίστε και εκτελέστε το πρόγραμμα!

```c
#include <stdio.h>

#define USER "Yoda\n"

int main()
{
    float b1, b2, b3, b4;
    float mo;
    int etos_gennisis, ilikia;

    printf("Dose 4 bathmoys\n\n\n");
    scanf("%f-%f-%f-%f", &b1, &b2, &b3, &b4);

    mo = (b1 + b2 + b3 + b4) / 4;
    
    printf("Dose etos gennisis: ");
    scanf("%d", &etos_gennisis);

    ilikia = 2021 - etos_gennisis;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);
    printf("Hlikia: %d\n", ilikia);

    return 0;
}
```

### Βήμα 7

Διαγράψτε την πρόταση return 0 και τον τύπο int από την main(). Μεταγλωττίστε και εκτελέστε το πρόγραμμα! Τι παρατηρήσατε;

```c
#include <stdio.h>

#define USER "Yoda\n"

main()
{
    float b1, b2, b3, b4;
    float mo;
    int etos_gennisis, ilikia;

    printf("Dose 4 bathmoys\n\n\n");
    scanf("%f-%f-%f-%f", &b1, &b2, &b3, &b4);

    mo = (b1 + b2 + b3 + b4) / 4;
    
    printf("Dose etos gennisis: ");
    scanf("%d", &etos_gennisis);

    ilikia = 2021 - etos_gennisis;

    printf("o mesos oros einai: %f\n", mo);
    printf(USER);
    printf("Hlikia: %d\n", ilikia);
}
```

Παρά το γεγονός ότι αφαιρέσαµε το `int` της main() και το `return 0`, το πρόγραµµα θα µεταγλωττιστεί στο DEV C++ χωρίς πρόβληµα! Αυτό όµως εξαρτάται από τον compiler, το πόσο αυστηρός είναι σύµφωνα µε τα πρότυπα της γλώσσας. **Εµείς πάντα θα τα βάζουµε!!!**

## Άσκηση 2.2 - Εντοπισμός και διόρθωση λαθών

Το παρακάτω πρόγραμμα είναι γεμάτο από συντακτικά λάθη! Πρέπει να το κάνετε copy-paste και να το αποθηκεύστε τοπικά στον Η/Υ σας. Μελετήστε τον κώδικα και διορθώστε όλα τα συντακτικά λάθη!

```c
include <stdlo.h>
include <stdlib.h>

#define PI=3.145769589
#define MESSAGE "TO PROGRAMMA HTAN GEMATO LATHI ALLA TA EFTIAKSA OLA!!!!!"

int maim()
(
    float aktina, emvado, perimetros;
    printf("Dose tin aktina toy kykloy :");
    scanf("%d",aktina);
    emvado=PI * aktina * aktina;
    Perimetros=2*PI*aktina;
    printf("Apotelesmata\n")
    printf("================\n");
    printf("Emvado=%f  Perimetros=% f\n",emvado,Perimetros);
    printf(MESSAGE);
    printf('\n\n');
        
    return 0;
)
```

Για να δείτε τη ΛΥΣΗ πατήστε [εδώ](source/lab_02/lab2_2.c).

## Άσκηση 2.3 – Χρήση χαρακτήρων

Γράψτε ένα ΝΕΟ πρόγραμμα το οποίο να εμφανίζει ένα ορθογώνιο πλαίσιο όπως φαίνεται στη διπλανή εικόνα. Το πλαίσιο θα αποτελείται από διπλές γραμμές οι οποίες θα σχηματίζονται από χαρακτήρες που θα πρέπει να εντοπίσετε στον ASCII πίνακα χαρακτήρων που θα βρείτε στη τελευταία διαφάνεια.Το πλαίσιο θα πρέπει να ξεκινάει από τη 5η γραμμή της οθόνης και θα πρέπει να αφήνει 6 κενές θέσεις από αριστερά.

**1ος τρόπος**:

```c
#include <stdio.h>

int main()
{
    printf("\n\n\n\n");
    printf("      %c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 187);
    printf("      %c     %c\n", 186, 186);
    printf("      %c     %c\n",186,186);
    printf("      %c     %c\n",186,186);
    printf("      %c%c%c%c%c%c%c\n", 200, 205, 205, 205, 205, 205, 188);

    return 0;
}
```

**2ος τρόπος**:

```c
#include <stdio.h>

int main()
{
    printf("\n\n\n\n");
    printf("%*c%c%c%c%c%c%c\n", 7, 201, 205, 205, 205, 205, 205, 187);
    printf("%*c%*c\n", 7, 186, 6, 186);
    printf("%*c%*c\n", 7, 186, 6, 186);
    printf("%*c%*c\n", 7, 186, 6, 186);
    printf("%*c%c%c%c%c%c%c\n", 7, 200, 205, 205, 205, 205, 205, 188);

    return 0;
}
```

### O χειρισµός χαρακτήρων από τη C

Η C χειρίζεται τους χαρακτήρες σαν **αριθµούς**. H εσωτερική απεικόνιση µιας σταθεράς (αλλά και µιας µεταβλητής) τύπου char είναι ένας αριθµός. Ο αριθµός αυτός είναι ο κωδικός ASCII  του χαρακτήρα και προκύπτει από τον οµώνυµο πίνακα µετατροπής που ακολουθεί.

Αυτό σηµαίνει ότι οι χαρακτήρες αντιµετωπίζονται ως ακέραιοι αριθµοί και µπορούν να µετέχουν σε αριθµητικές παραστάσεις.
