#include <stdio.h>

int n = 0;

void printing(int *tab) {
    if (n == 0) {
        printf("Tablica jest pusta\n");
    } else {
        for(int i = 0; i < n; i++) {
            printf("%d\n", tab[i]);
        }
    }
}

void newEle(int *tab) {
    char new;
    int ascii;
    if (n < 20) {
        printf("Podaj liczbe do dodania");
        scanf("%c", &new);
        if (new >= 0 && new <= 9) {
            tab[n] = new;
            n++;
        } else {
            printf("Podana wartosc nie jest liczba wpisz 1 jesli chcesz zastapic ja kodem ASCII a 0 jesli nie");
            scanf("%d", &ascii);
            if(ascii == 1) {
                int x = new;
                tab[n] = x;
                n++;
            } else {
                return;
            }
        }
    }
}

void new(int *tab) {
    int new;
    if (n < 20) {
        printf("Podaj liczbe do dodania");
        scanf("%d", &new);
        tab[n] = new;
        n++;
    }
}

void del(int *tab, int idx) {
    if(!(idx < n)) {
        return;
    } else {
        tab[idx] = tab[idx + 1];
        return del(tab, idx + 1);
    }
}

int square(int *tab) {
    int sum = 0;
    if (n > 0) {
        for(int i = 0; i < n; i++) {
            sum += tab[i] * tab[i];
        }
        return printf("%d", sum);
    } else {
        return 0;
    }
}

void column(int *tab) {
    int amount;
    int x = 0;
    printf("Podaj ilosc kolumn:");
    scanf("%d", &amount);
    x = n / amount;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {

        }
    }
}

int main() {
    int tab[20];
    int idx;
    char choice;
    while (1) {
        scanf(" %c\n", &choice);
        switch (choice) {
            case 'e':
                return 0;
            case 'w':
                printing(tab);
                break;
            case 'd':
                newEle(tab);
                break;
            case 'D':
                new(tab);
                break;
            case 'u':
                printf("Podaj index elementu do usuniecia:");
                scanf("%d", &idx);
                del(tab, idx);
                break;
            case 's':
                square(tab);
                break;
            case 't':
                column(tab);
                break;
            default:
                printf("Tej opcji nie ma w programie spróbuj ponownie\n");
                break;
        }
    }
    return 0;
}