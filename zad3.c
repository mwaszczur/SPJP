#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\n Podaj pierwszą liczbę:");
    scanf("%d", &a);
    printf("\n Podaj drugą liczbę:");
    scanf("%d", &b);
    getchar();

    c=0;
    while(c*=a<=b)
    {
        c++;
        if(c*=a>b)
        printf("\n Wynik: %d", c);
        getchar();
    }
    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;
}