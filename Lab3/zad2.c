#include<stdio.h>
int main()
{
    int liczba1,liczba2;
    printf("\n Podaj pierwsza liczbe:");
    scanf("%d" ,&liczba1);
    printf("\n Podaj druga liczbe:");
    scanf("%d" ,&liczba2);

    printf("\n Iloczyn: %d * %d = %d",liczba1,liczba2,liczba1*liczba2);
    printf("\n Iloraz: %d : %d = %d",liczba1,liczba2,liczba1/liczba2);
    printf("\n Reszta z dzielenia: %d",liczba1%liczba2);
    printf("\n Suma: %d + %d = %d",liczba1,liczba2,liczba1+liczba2);
    printf("\n Roznica: %d - %d = %d",liczba1,liczba2,liczba1-liczba2);
    getchar();
    
    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;


}