/*
5.Write a C program to put even and odd numbers of an array in two different arrays.
*/

#include<stdio.h>
#include<stdlib.h>

void createarray(int, int, int, int*/*, int* */);
void printarray(int*, int);

int main()
{
    int list[12], i; //Array and index
    int size, evensize=0, oddsize=0; //Sizes of arrays

//  int *newar; //Pointer with the adress of "even" array from "createarray" function. Doesn't work.

    size=sizeof(list)/sizeof(int);

    for(i=0;i<size;i++)
    {
        printf("Input number %d:\t", i+1);
        scanf("%d", &list[i]);

        if(list[i]%2==0)
            evensize++;
        else
            oddsize++;
    }

    printf("\n");

    createarray(size, evensize, oddsize, &list /*,&newar*/);

    printf("\n");

//  printarray(newar, evensize);    Cannot print the new created array even tho
//                                  "newar" pointer is now pointing to the adress
//                                  of the new array

    return 0;
}

//Creates 2 arrays. One for even numbers and other for odd numbers
//Their sizes are dependent on how many even or odd numbers are
//Finally print each of the arrays.
void createarray(int size, int esize, int osize, int* list /*, int* newar */)
{
    int even[esize], odd[osize];
    int j=0, z=0; //Index of even and odd respectively
    int i; //loop counter

    for(i=0;i<size;i++)
    {
        if(*list%2==0)
        {
            even[j]=*list;
            j++;
        }
        else
        {
            odd[z]=*list;
            z++;
        }
        list++;
    }

    printf("Even numbers = ");printarray(&even, esize);
    printf("\n\n");
    printf("Odd numbers  = "); printarray(&odd, osize);

    printf("\n\n");

    /*
//  This is for testing purposes because
//  I'm not able to print the created arrays calling them from main function

    int* pe;
    pe=&even;
    *newar=&even;

    printarray(pe, esize);
    printf("\n");
    printarray(*newar, esize); //prints the array correctly. Doesn't work outside of this function
    */
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
