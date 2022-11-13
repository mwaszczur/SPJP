#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\n Podaj pierwsza liczbe:");
    scanf("%d" ,&a);
    printf("\n Podaj druga liczbe:");
    scanf("%d" ,&b);
    printf("\n Podaj trzecia liczbe:");
    scanf("%d" ,&c);

    d=a;
    if(b>d) d=b;
    if(c>d) d=c;

    printf("\n %d",d);
    getchar();

    printf("\n Wcisnij ENTER aby wyjsc");
    getchar();
    return 0;
}