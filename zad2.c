#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("\n Podaj liczbę:");
    scanf("%d", &a);
    printf("\n Podaj potęgę liczby:");
    scanf("%d", &b);
    getchar();

    c=1;
    for(d = 0; d < b; d++)
    {
        c *= a;
    }

    printf("\n Wynik potęgi: %d", c);
    getchar();

    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;


}