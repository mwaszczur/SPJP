#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define clrscr() system("@cls||clear");
int n=0;

int main()
{
    int tab[100];
    char numberToInsert[4];
    char indexToDelete[2];
    int sum=0;


    for(int i=0;i<n;i++)
     {
       tab[i]=0;
     }

    char selectedOption[10]="-";

    while(selectedOption[0]!='0')
    {
        printf( "\n1.Display array items\t2.Check if you can add new item to the array\n\n");
        printf( "\n3.Deleteitem from array\t4.Display sum of the elements of an array\n\n");

        printf( "Select option :\n");
        scanf("%s",&selectedOption);

       switch(selectedOption[0])
       {
            case '1':
                DisplayTableElements(tab);
            break;
            case '2':
                CheckIfYouCanAddNewItem();
                if(n<100)
                {
                    printf("Enter the number you want to insert into the array:\n");
                    scanf("%s",&numberToInsert);

                    if(isdigit(numberToInsert[0]))
                    {
                        tab[n]=numberToInsert[0]-'0';
                        n++;
                        printf("Value inserted succesfully\n");
                    }
                    else
                        printf("Incorrect value!\nPlease enter the number.:\n");
                }
            break;
            case '3':
                printf("Enter index of the array:\n");
                scanf("%s",&indexToDelete);
                int nn = atoi(indexToDelete);
                printf("%d",nn);
                if(nn!=0 & nn-1<n)
                {
                    for(int i=nn-1;i<n;i++)
                    {
                        if(i+1<n)
                            tab[i]=tab[i+1];
                    }

                    tab[n]=0;
                    n--;
                    printf("Element deleted succesfully");
                }
                else
                    printf("Incorrect value:\n");
            break;
            case '4':
                sum = ReturnSumOfElements(tab);

                if(sum==0)
                    printf("Table is empty\n");
                else
                    printf("Sum of the elements: %d\n", sum);
            break;
           default:
               if(selectedOption[0]!='0')
                  printf( "Incorrect number. Please try again.\n");
            break;
       }

       if(selectedOption[0]!='0')
       {
         printf( "\n\nPress any key to continue");
         getchar();
         clrscr();
       }

    }

    printf("Hello world!\n");
    return 0;
}

void DisplayTableElements(int tab[])
{
    printf("\n Array items:\n");

    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]!=0)
        {
            printf("%d\n",tab[i]);
            counter++;
        }
    }

    if(counter==0)
        printf("Table is empty\n");

}
void CheckIfYouCanAddNewItem()
{
    if(n==99)
        printf("Array is Full!. You can't add new item.\n");
    else
        printf("You can add new item to the array.\n");
}
int ReturnSumOfElements(int tab[])
{
    int retVal=0;

    for(int i=0;i<n;i++)
        retVal+=tab[i];

    return retVal;
}

