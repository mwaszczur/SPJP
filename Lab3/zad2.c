#include<stdio.h>
int main()
{
    int liczba1,liczba2;
    printf("\n Podaj pierwszą liczbę:");
    scanf("%d" ,&liczba1);
    printf("\n Podaj drugą liczbę:");
    scanf("%d" ,&liczba2);

    printf("\n Iloczyn: %d * %d = %d",liczba1,liczba2,liczba1*liczba2);
    printf("\n Iloraz: %d : %d = %d",liczba1,liczba2,liczba1/liczba2);
    printf("\n Suma: %d + %d = %d",liczba1,liczba2,liczba1+liczba2);
    printf("\n Różnica: %d - %d = %d",liczba1,liczba2,liczba1-liczba2);

    getchar();
    return 0;
}