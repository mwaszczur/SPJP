#include<stdio.h>
int main()
{
    int a, i, c=1;
    printf("\n Podaj liczbę naturalną:");
    scanf("%d", &a);
    getchar();

    for(i=1; i<=a; i++)
    {
        c += i * i;
        printf("\n %d*%d=%d", i, i, i*i);
    }
    printf("\n Wynik: %d", c);
    getchar();

    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;


}