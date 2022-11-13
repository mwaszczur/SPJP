#include<stdio.h>
int main()
{
    int liczba1,liczba2;
    printf("\n Podaj pierwsza liczbe:");
    scanf("%d" ,&liczba1);
    printf("\n Podaj druga liczbe:");
    scanf("%d" ,&liczba2);

    if(liczba1>liczba2)
    printf("\n %d",liczba1);
    else
    printf("\n %d",liczba2);
    getchar();

    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;
}