//10.Write a C program to accept an array and reverse it using pointers.

#include<stdio.h>
#include<stdlib.h>

void reverse(int*, int);
void printarray(int*, int);

int main()
{
    int i, list[3], size;

    size=sizeof(list)/sizeof(int);

    for(i=0;i<size;i++)
    {
        printf("Input number %d: ", i+1);
        scanf("%d", &list[i]);
    }

    reverse(list, size);                // &list may give a warning. If you want to send a base address just send name of an array

    printf("\n\n");
    printf("\t");printarray(list, size);    //// &list may give a warning. If you want to send a base address just send name of an array
    printf("\n");

    return 0;
}

void reverse(int* ar_adress, int size)
{
    int t;
    int* realbase;

    realbase=ar_adress;
    size--;

    while(1)
    {
        t=*ar_adress;
        *ar_adress=*(realbase+size);
        *(realbase+size)=t;

        size--;
        ar_adress++;

        if(ar_adress==(realbase+size) || ar_adress>(realbase+size))
        {
            break;
        }
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
