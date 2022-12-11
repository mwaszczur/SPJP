#include <stdio.h>
int main()
{
    int n, wynik;
    printf("\n Wpisz liczbę dodatnią:");
    scanf("%d", &n);
    wynik = Silnia(n);
    printf("Silnia z %d wynosi %d", n, wynik);
    
    printf("\nWciśnij ENTER aby wyjsć");
    getchar();
    return 0;
}

int Silnia(int n)
{
    if(n<=1)
        return 1;
        
    return n*Silnia(n-1);
}