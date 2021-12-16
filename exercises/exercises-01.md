[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# 1η Οµάδα ασκήσεων

## Άσκηση 1

Να γραφεί πρόγραµµα που να διαβάζει τις τιµές δύο ακέραιων µεταβλητών και να αντιµεταθέτει τα περιεχόµενά τους π.χ. αν έχουν τιµές 7 και 20, να αποκτήσουν τιµές 20 και 7 αντίστοιχα. Να εµφανίζει τα περιεχόµενα των µεταβλητών πριν και µετά την αντιµετάθεση.

```c
#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Dwse enan arithmo: ");
    scanf("%d", &num1);

    printf("Dwse akoma enan arithmo: ");
    scanf("%d", &num2);

    printf("\nPrin tin antimetathesi\nnum1 = %d\nnum2 = %d", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nMeta tin antimetathesi\nnum1 = %d\nnum2 = %d", num1, num2);

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_01.c).

## Άσκηση 2

Να γραφεί πρόγραµµα το οποίο θα ζητά έναν αριθµό από τον χρήστη και θα ελέγχει αν ο αριθµός είναι θετικός, αρνητικός ή µηδέν, εµφανίζοντας κατάλληλο µήνυµα.

```c
#include <stdio.h>

int main()
{
    int num;

    printf("Dwse enan arithmo: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("To %d einai thetikos arithmos.", num);
    }
    else if (num < 0)
    {
        printf("To %d einai arnitikos arithmos.", num);
    }
    else
    {
        printf("O arithmos pou edwses einai to miden.");
    }

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_02.c).

## Άσκηση 3

Να γραφεί πρόγραµµα που να διαβάζει έναν πραγµατικό αριθµό από τον χρήστη και θα ελέγχει αν ο αριθµός είναι µεγαλύτερος η ίσος µε το 0. Στη περίπτωση που είναι, να εµφανίζει την τετραγωνική ρίζα του αριθµού διαφορετικά να εµφανίζει το µήνυµα "Λάθος αριθµός".

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Dwse arithmo: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        printf("H tetrwgoniki riza tou %.2f einai %.2f.", num, sqrt(num));
    }
    else
    {
        printf("Lathos arithmos!");
    }

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_03.c).

## Άσκηση 4

Να γραφεί πρόγραµµα που να διαβάζει έναν ακέραιο και να εµφανίζει το τετράγωνό του (x^2) αν είναι άρτιος ή τον κύβο του (x^3) αν είναι περιττός.

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Dwse arithmo: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("To tetragwno tou arithmou %d einai: %.2f", num, pow(num,2));
    }
    else
    {
        printf("O kubos tou arithmou %d einai: %.2f", num, pow(num,3));
    }

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_04.c).

## Άσκηση 5

Να γίνει πρόγραµµα που να βρίσκει και να εµφανίζει τον µικρότερο µεταξύ τριών αριθµών που θα δίδονται από το πληκτρολόγιο.

```c
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Dwse ton 1o arithmo: ");
    scanf("%d", &num1);

    printf("Dwse ton 2o arithmo: ");
    scanf("%d", &num2);

    printf("Dwse ton 3o arithmo: ");
    scanf("%d", &num3);

    int max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }

    printf("O megaluteros arithmos einai to %d.", max);

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_05.c).

## Άσκηση 6

Για τον τελικό βαθµό των εργασιών του µαθήµατος **ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΣ ΙΙΙ** δεν υπολογίζονται οι εργασίες µε τον µεγαλύτερο και µικρότερο βαθµό. Να γραφεί πρόγραµµα το οποίο να ζητάει τους πέντε βαθµούς των εργασιών και να υπολογίζει τον µέσο όρο των τριών από αυτές χωρίς να λαµβάνει υπόψη τις εργασίες µε τον µεγαλύτερο και τον µικρότερο βαθµό.

```c
#include <stdio.h>

int main()
{
    float b1, b2, b3, b4, b5;

    printf("Dwse vathmo 1: ");
    scanf("%f", &b1);
    printf("Dwse vathmo 2: ");
    scanf("%f", &b2);
    printf("Dwse vathmo 3: ");
    scanf("%f", &b3);
    printf("Dwse vathmo 4: ");
    scanf("%f", &b4);
    printf("Dwse vathmo 5: ");
    scanf("%f", &b5);

    float max = b1, min = b1;

    if (b2 > max) max = b2;
    else if (b2 < min) min = b2;
    if (b3 > max) max = b3;
    else if (b3 < min) min = b3;
    if (b4 > max) max = b4;
    else if (b4 < min) min = b4;
    if (b5 > max) max = b5;
    else if (b5 < min) min = b5;

    int sum = b1 + b2 + b3 + b4 + b5 - max - min;

    float mo = sum/3.0;

    printf("MO: %.2f", mo);

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_06.c).

## Άσκηση 7

Να γραφεί πρόγραµµα το οποίο δέχεται ως είσοδο τον αριθµό ενός µήνα (1-12) και να εµφανίζει το όνοµα του µήνα καθώς και τις µέρες που διαθέτει (π.χ Ιανουάριος 31). Θεωρήστε ότι ο Φεβρουάριος έχει πάντα 28 ηµέρες. Αν δοθεί αριθµός εκτός ορίων (π.χ µικρότερος του 1 και µεγαλύτερος από 12) να βγάζει το κατάλληλο µήνυµα.

```c
#include <stdio.h>

int main()
{
    int month;

    printf("Poio mina thes na deis (1-12)? ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("O %dos minas einai o Ianouarios kai exei 31 meres.", month);
            break;
        case 2:
            printf("O %dos minas einai o Febrouarios kai exei 28 meres.", month);
            break;
        case 3:
            printf("O %dos minas einai o Martios kai exei 31 meres.", month);
            break;
        case 4:
            printf("O %dos minas einai o Aprilios kai exei 30 meres.", month);
            break;
        case 5:
            printf("O %dos minas einai o Maios kai exei 31 meres.", month);
            break;
        case 6:
            printf("O %dos minas einai o Iounios kai exei 30 meres.", month);
            break;
        case 7:
            printf("O %dos minas einai o Ioulios kai exei 31 meres.", month);
            break;
        case 8:
            printf("O %dos minas einai o Augoustos kai exei 31 meres.", month);
            break;
        case 9:
            printf("O %dos minas einai o Septemvrios kai exei 30 meres.", month);
            break;
        case 10:
            printf("O %dos minas einai o Oktovrios kai exei 31 meres.", month);
            break;
        case 11:
            printf("O %dos minas einai o Noemvrios kai exei 30 meres.", month);
            break;
        case 12:
            printf("O %dos minas einai o Dekemvrios kai exei 31 meres.", month);
            break;
        default:
            printf("Kati pige lathos!");
            break;
    }

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_07.c).

## Άσκηση 8

Να γίνει πρόγραµµα το οποίο θα ζητά την τιµή ενός προϊόντος και την ποσότητα που θα αγοράσουµε. Να λάβετε υπόψη ότι το συνολικό κόστος επιβαρύνεται µε ΦΠΑ 13% και στο τελικό σύνολο έχουµε έκπτωση 10%. Το πρόγραµµα να υπολογίζει και να εµφανίζει το ποσό που πρέπει να πληρώσουµε.

```c

```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_08.c).

## Άσκηση 9

Να γραφεί πρόγραµµα το οποίο να ζητάει το χρόνο σε δευτερόλεπτα, και να εµφανίζει το πλήθος των ωρών, των λεπτών και των δευτερολέπτων που αντιστοιχούν στο χρόνο που δόθηκε.

```c
#include <stdio.h>

int main()
{
    int var, hour, minutes, seconds, num;

    printf("Dwse xrono se deuterolepta: ");
    scanf("%d", &var);

    hour = (var / 3600);
    num = (var % 3600);
    minutes = (num / 60);
    seconds = (num % 60);

    printf("\nTa %d deuterolepta einai:\n", var);
    printf("%d wres\n%d lepta\n%d deuterolepta", hour, minutes, seconds);

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_09.c).

## Άσκηση 10

Να γραφεί πρόγραµµα το οποίο να διαβάζει το εισόδηµά µας και να υπολογίζει και να εµφανίζει το φόρο σύµφωνα µε τα παρακάτω:

* Αν το εισόδηµα είναι µέχρι και 10000€ ο φόρος είναι 0%.
* Για εισοδήµατα πάνω από 10000€ µέχρι 15000€ ο φόρος είναι 10%
* Για εισοδήµατα πάνω από 15000€ ο φόρος είναι 20%.

```c
#include <stdio.h>

int main()
{
    float eisodima, foros;

    printf("Dwse to eisodima sou: ");
    scanf("%f", &eisodima);

    if (eisodima <= 10000)
    {
        foros = 0;
        printf("Me eisodima %.2f o foros einai: %.2f", eisodima, foros);
    }
    else if (eisodima <= 15000)
    {
        foros = eisodima * 0.1;
        printf("Me eisodima %.2f o foros einai: %.2f", eisodima, foros);
    }
    else
    {
        foros = eisodima * 0.2;
        printf("Me eisodima %.2f o foros einai: %.2f", eisodima, foros);
    }

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_10.c).

## Άσκηση 11

Να γραφεί πρόγραµµα το οποίο θα διαβάζει τις δύο πλευρές α και β ενός ορθογωνίου παραλληλογράµµου και θα εµφανίζει την περίµετρο και το εµβαδόν του (περίµετρος = 2*(α+β), εµβαδόν = α*β). Το πρόγραµµα να προτρέπει το χρήστη για την είσοδο δεδοµένων µε τη φράση "Δώσε τις δυο πλευρές :". Στη περίπτωση που οι δύο πλευρές είναι ίσες το πρόγραµµα να εµφανίζει τη φράση "Τετράγωνο µε περίµετρο ?? και εµβαδόν ##", διαφορετικά να εµφανίζει "Ορθογώνιο µε περίµετρο ?? και εµβαδόν ##". Όπου ?? και ## η περίµετρος και το εµβαδόν που υπολογίσαµε αντίστοιχα.

```c

```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_11.c).

## Άσκηση 12

Να γίνει πρόγραµµα το οποίο θα διαβάζει έναν ακέραιο στο διάστηµα (0 – 99) και θα τυπώνει ολογράφως τον αριθµό. (Π.χ. 7 &rarr; "επτά", 26 &rarr; "είκοσι έξι").

```c
#include <stdio.h>

int main()
{
    int number,digit_1,digit_2;
    printf("Dwse mou enan arithmo apo to 0 ews to 99: ");
    scanf("%d", &number);

    digit_1=number/10;
    digit_2=number%10;

    printf("\nO arithmos %d olografws grafete ws eksis: ", number);

    if(number>=10 && number<=12)
    {
        switch(number)
        {
            case 10: printf("deka"); break;    
            case 11: printf("enteka"); break; 
            case 12: printf("dwdeka"); break;
        }
    }
    else
    {
        switch(digit_1)
        {
            case 1:	printf("deka"); break;
            case 2: printf("eikosi"); break;
            case 3: printf("trianta"); break;  
            case 4: printf("saranta"); break;   
            case 5: printf("peninta"); break;   
            case 6: printf("exinta"); break;   
            case 7: printf("evdominta"); break;
            case 8: printf("ogdonta"); break;
            case 9: printf("eneninta"); break;
        }

        switch(digit_2)
        {
            case 0: printf("miden"); break;
            case 1: printf("ena"); break;    
            case 2: printf("duo"); break;    
            case 3: printf("tria"); break;
            case 4: printf("tessera"); break;
            case 5: printf("pente"); break;
            case 6: printf("exi"); break;
            case 7: printf("efta"); break;
            case 8: printf("oxto"); break;
            case 9: printf("ennia"); break;
        }      	
    }
    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_12.c).

## Άσκηση 13

Το είδος ενός γραµµατοσήµου καθορίζεται από τον χαρακτήρα Ε για εσωτερικού, Α για εξωτερικού και Τ για τοπικές αποστολές. Κάθε γραµµατόσηµο κατηγορίας Ε κοστίζει 0.23€, κατηγορίας Α 0.70€ και κατηγορίας Τ 0.15€. Να γραφεί πρόγραµµα το οποίο θα ζητάει να πληκτρολογήσουµε τη ποσότητα και το είδος των γραµµατοσήµων που θέλουµε να αγοράσουµε και θα υπολογίζει το ποσό που πρέπει να πληρώσουµε.

```c
#include <stdio.h>

#define E 0.23
#define A 0.70
#define T 0.15

int main(){
    float poso;
    char eidos;

    printf("Posa grammatosima theleis kai poio eidos (E-A-T)? ");
    scanf("%f %c", &poso, &eidos);

    switch(eidos)
    {
        case 'E':
            printf("Me to eidos %c tha plirwseis %.2f.", eidos, (poso*E));
            break;
        case 'A':
            printf("Me to eidos %c tha plirwseis %.2f.", eidos, (poso*A));
            break;
        case 'T':
            printf("Me to eidos %c tha plirwseis %.2f.", eidos, (poso*T));
            break;
        default:
            printf("To eidos pou zitas den yparxei!");
    }
    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_13.c).

## Άσκηση 14

Να γραφεί πρόγραµµα το οποίο να εµφανίζει τους χαρακτήρες µε **ASCII** κωδικούς 80, 65, 66 και 47.

```c
#include <stdio.h>

int main()
{
    printf("Xaraktires me ASCII kwdika:\n");
    printf("80 = %c\n65 = %c\n66 = %c\n47 = %c", 80, 65, 66, 47);

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_14.c).

## Άσκηση 15

Να γραφεί πρόγραµµα το οποίο να διαβάζει ένα χαρακτήρα από το πληκτρολόγιο και να εµφανίζει τον ίδιο τον χαρακτήρα καθώς και τον **ASCII** κωδικό του.

```c
#include <stdio.h>

int main()
{
    char ch;

    printf("Dwse enan charakrita: ");
    scanf("%c", &ch);

    printf("O kwdikas tou charaktira '%c' sto ASCII einai to %d.",ch, ch);

    return 0;
}
```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_15.c).

## Άσκηση 16

Να γραφεί πρόγραµµα το οποίο να ζητάει την ακτίνα `r` ενός κύκλου. Να υπολογίζει και να εµφανίζει το εµβαδόν (π*r^2) και τη περίµετρό του `2*π*r` του µε διπλή ακρίβεια. Να χρησιµοποιηθεί η συνάρτηση `pow()` για την ύψωση σε δύναµη. Η τιµή του `π` `3.141592653589793` να δηλωθεί ως σταθερά µε την οδηγία `#define`.

```c

```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_16.c).

## Άσκηση 17

Να γραφεί πρόγραµµα το οποίο να ζητάει τον αριθµό των ηµερών από την αρχή του έτους και να µας εµφανίζει την ακριβή ηµεροµηνία. Π.χ αν δώσουµε 5 να εµφανίζει 5 Ιανουαρίου αν δώσουµε 38 να εµφανίζει 7 Φεβρουαρίου. Θεωρήστε ότι ο Φεβρουάριος έχει πάντα 28 ηµέρες και οι υπόλοιποι µήνες όπως έχουν κανονικά.

```c

```

Για να κατεβάσετε τον κώδικα πατήστε [εδώ](source/exercise_1_17.c).
