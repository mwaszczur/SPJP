#include <stdio.h>

int n = 0;

void one(int *tab)
{
    if (n == 0)
    {
        printf("Empty table\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

void two(int *tab)
{
    if (n < 20)
    {
        char x;
        scanf("\n%c", &x);
        if (x <= '9' && x >= '0')
        {
            tab[n] = (int)x - (int)'0';
            n++;
            return;
        }
        else
        {
            printf("This is not a number do you want add to table this asci number y/n?\n");
            char choice;
            scanf("\n%c", &choice);

            if (choice == 'y')
            {
                tab[n] = (int)x;
                n++;
            }
            return;
        }
    }
    printf("Not enough space in array\n");
}

void three(int *tab)
{
    if (n < 20)
    {
        int x;
        scanf("\n%d", &x);
        tab[n] = x;
        n++;
        return;
    }
    printf("Not enough space in array\n");
}

void four(int *tab, int idx)
{
    if (idx < 0 || idx >= n)
    {
        n--;
        return;
    }
    tab[idx] = tab[idx + 1];
    four(tab, idx + 1);
}

void fourW(int *tab)
{
    int x;
    scanf("\n%d", &x);
    four(tab, x);
}

int five(int *tab) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = tab[i] * tab[i];
    }
    return sum;
}

void six(int *tab) {
    int x;
    scanf("\n%d", &x);
    int idx = 0;
    int helper = n/x;
    if(n%x >0) {
        helper++;
    }
    for (int i = 0; i < helper; i++)
    {
        for(; idx < x; idx++) {
            if(idx >= n) {
                break;
            }
           printf("%d\t", tab[idx]); 
        }
        x +=x;
        printf("\n");
    }
    
}

void seven(int *tab) {
    int rows;
    scanf("\n%d", &rows);
    int idx = 0;
    int columns = n/rows;
    if(n%rows >0) {
        columns++;
    }
    for(int i=0; i < rows; i++) {
        int ridx = 0;
        for(int j =0; j < columns; j++) {
            if(idx + ridx >= n) {
                break;
            }
           printf("%d\t", tab[idx + ridx]);
           ridx += rows;
        }
        idx++;
        
        printf("\n");
    }

}

int main()
{
    int tab[20];
    char choice;
    while (1)
    {
        scanf("%c", &choice);
        switch (choice)
        {
        case 'e':
            return 0;
            break;
        case 'w':
            one(tab);
            break;
        case 'd':
            two(tab);
            break;
        case 'D':
            three(tab);
            break;
        case 'u':
            fourW(tab);
            break;
        case 's':
            printf("%d\n", five(tab));
            break;
        case 't':
            six(tab);
            break;
        case 'T':
            seven(tab);
            break;
        default:
            break;
        }
    }
}