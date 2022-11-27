#include<stdio.h>

int main()
{
    int a,b,w,wybor;
    printf("\n Podaj pierwszą liczbę:");
    scanf("%d",&a);
    printf("\n Podaj drugą liczbę:");
    scanf("%d",&b);
    printf("\n Wybierz działanie:");
    printf("\n [1]-Dodawanie \n [2]-Odejmowanie \n [3]-Mnożenie \n [4]-Dzielenie \n");
    scanf("%d", &wybor);
    getchar();
    switch(wybor)
    {
        case 1:
        w=a+b;
        printf("Wynik dodawania: %d", w);
        break;

        case 2:
        w=a-b;
        printf("Wynik odejmowania: %d", w);
        break;

        case 3:
        w=a*b;
        printf("Wynik mnożenia: %d", w);
        break;

        case 4:
        w=a/b;
        printf("Wynik dzielenia: %d", w);
        break;
    }
    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;
}