[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Feffie375.github.io%2FTPTE-AEGEAN&count_bg=%23E3802B&title_bg=%2307359E&icon=internetarchive.svg&icon_color=%23E7E7E7&title=%CE%A0%CF%81%CE%BF%CE%B2%CE%BF%CE%BB%CE%AD%CF%82&edge_flat=false)](https://hits.seeyoufarm.com)

# Λυμένα Παραδείγματα 1

## Παράδειγμα 1

Τι θα περιέχουν οι µεταβλητές a,b, και c στο τέλος του παρακάτω προγράµµατος;

```c
#include <stdio.h>

int main()
{
    int a,b,c = 5;
    a = b = 6;
    a = b + c;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture_01/example1.c).

## Παράδειγμα 2

Τι θα περιέχουν οι µεταβλητές a,b, και c στο τέλος του παρακάτω προγράµµατος;

```c
#include <stdio.h>

int main()
{
    const int a = 10;
    int b, c;
    b = 5 + (c = 9);
    c = a + b + 1; 
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture_01/example2.c).

## Παράδειγμα 3

Εντοπίστε τα λάθη στον παρακάτω κώδικα:

```c
#include stdio.h

int main()
{
    const int c = 3;
    int a, b;
    a = 2;
    float d;
    d = 4.3
    a = 4 + (b = 2);
    3 = a;
    c = c + b ;

    return 0;
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture_01/example3.c).

## Παράδειγμα 4

Να γραφεί πρόγραµµα το οποίο να αποθηκεύει τους αριθµούς 3, 7, και 21 σε τρεις θέσεις µνήµης. Κατόπιν, να υπολογίζει και να αποθηκεύει σε µία τέταρτη θέση µνήµης το µέσο όρο τους. Τέλος να εµφανίζει τον µέσο όρο.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture_01/example4.c).

## Παράδειγμα 5

Να γραφεί πρόγραµµα το οποίο να εµφανίζει στην οθόνη το κείµενο του παρακάτω πλαισίου.

```none
Tmima
Politismikis
Texnologias
kai
Epikoinonias
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture_01/example5.c).

## Παράδειγμα 6

Τι θα εµφανίσει στην οθόνη το ακόλουθο πρόγραµµα;

```c
#include <stdio.h>

int main()
{
    int a = 4, b = 5;
    float c = 2.5;
    char ch = 'A';

    printf("%d %d %c\n", a, b, ch);
    printf("%f\n", c);
    printf("%d\n%d\n%d\n", a, b, a+b);
    printf("Telos\n");

    return 0;
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture_01/example6.c).
