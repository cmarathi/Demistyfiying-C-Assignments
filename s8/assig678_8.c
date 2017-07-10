/*
6.Write a C program to insert an element at a specified position in a given array.
7.Write a C program to delete the specified integer from an array
8.Write a C program to delete a number from specified location from an array.
*/

#include<stdio.h>
#include<stdlib.h>

void delete_i(int*, int);
void interchange(int*, int, int int);
void printarray(int*, int);

int main()
{

    int list[5], i, size; //Array, index and size of array
    int change;
    char ch; //To select menu options

    size=sizeof(list)/sizeof(int);

    for(i=0;i<size;i++)
    {
        printf("Input number %d: ", i+1);
        scanf("%d", &list[i]);
    }

    while(1)
    {
        printf("\n");

        printf("What do you want to do?");
        printf("\n\tD - Delete an entry(assig 8)\n\tM - Modify an entry(assig 6)\n\tA - Add a new entry\n\tC - Change specified integer for another value(assig 7)");
        printf("\n\n\t");
        scanf(" %c", &ch);

        switch(ch)
        {
            case 'd': case 'D': //Delete specified entry. If no entries are left, throw warning.
            {
                printf("\n");

                if(!size)
                {
                    printf("Array have no entries!!!");
                    printf("\n");
                    break;
                }

                do
                {
                    printf("Which entry do you want to delete?(1 to %d): ", size);
                    scanf("%d", &i);

                }while(i<1 || i>size);

                delete_i(&list[i-1], size-i);
                size--;

                printf("\n\t");printarray(&list,size);
                printf("\n");

                break;
            }

            case 'm': case 'M': //Modify specified entry.
            {
                printf("\n");

                if(size)
                {
                    do
                    {
                        printf("Which entry do you want to Modify?(1 to %d): ", size);
                        scanf("%d", &i);

                    }while(i<1 || i>size);

                    printf("\nInput new value: ");
                    scanf("%d", &list[i-1]);

                    printf("\n\t");printarray(&list,size);
                }
                else
                {
                    printf("Array have no entries!!!");
                }

                printf("\n");
                break;
            }

            case 'a': case 'A': //Add a new entry. Throw warning if array is at max capacity.
            {
                printf("\n");

                if(size<sizeof(list)/sizeof(int))
                {

                    printf("Input value for new entry: ");
                    scanf("%d", &list[size]);

                    size++;

                    printf("\n\t");printarray(&list, size);
                }
                else
                {
                    printf("Array is at max capacity!!!");
                }

                printf("\n");
                break;
            }

            case 'c': case 'C':  //Change specified number for another specified number. Affects all elements.
            {
                printf("\n");

                printf("Which number do you want to change?: ");
                scanf("%d", &i);
                printf("Change with... ");
                scanf("%d", &change);

                interchange(&list, size, i, change);
                printf("\n\t");printarray(&list, size);

                printf("\n");
                break;
            }

            default:
            {
                    printf("\nERROR!!!\n");
                    break;
            }
        }
    }
}
//Move the desired entry to the last spot and hide it from user's sight.
void delete_i(int* ar_adress, int size)
{
    int t;

    t=*ar_adress;

    while(size) //Rearrange the array to keep original order by moving elements 1 spot back.
    {
        *ar_adress=*(ar_adress+1);

        ar_adress++;
        size--;
    }

    *ar_adress=t;
}
//Look for the number the user wants to change, and change it. Affects all elements of the array.
void interchange(int* ar_adress, int size, int modified, int modify_to)
{
    while(size)
    {
        if(*ar_adress==modified)
            *ar_adress=modify_to;

        ar_adress++;
        size--;
    }
}

void printarray(int* array_adress, int size)
{
    while(size)
    {
        printf("%d%s", *array_adress, size-1?", ":".");

        array_adress++;
        size--;
    }
}
