#include <stdio.h>
int main()
{
    int a, b, wynik;
    printf("\nWpisz pierwszą liczbę: ");
    scanf("%d", &a);
    printf("\nWpisz drugą liczbę: ");
    scanf("%d", &b);
    wynik = NWD(a,b);
    printf("\nNWD liczb wynosi %d", wynik);
    
    printf("\nWciśnij ENTER aby wyjść");
    getchar();
    return 0;
}

int NWD(int a, int b)
{
    if (a==0)
        return b;
        
    return NWD(b % a, a);
}