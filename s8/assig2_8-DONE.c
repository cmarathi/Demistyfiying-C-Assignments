/*
2.
Write a C program to sum and average of an array containing integers.
Take integer input from user. User input may be positive or negative or zero.
Sum of negative integers and positive integers should be printed separately.

(Note: Write program using separate functions. Use pointers)
*/

//|44|warning: passing argument 2 of 'sum' from incompatible pointer type
//|18|note: expected 'int *' but argument is of type 'int (*)[30]'

//It throws some warnings but program seems to work fine.

#include<stdio.h>
#include<stdlib.h>

void sum(int*, int*, int*, int*, int*);
void average(int*, int*, double*);

int main()
{
    int z=0; //Determine "how big the user wants the array to be". Max of 30
    int num[30]; //Actual array. Reserve 30*sizeof(int) bytes in the memory when program is executed (I think)
    int i; //Index of array
    int total, psum, nsum; //Variables to save wanted operations based in array values.
    double avg;            //  "        "   "    "       "         "    "   "     "

    do
    {
        printf("How many numbers do you want to add?(2 MIN - 30 MAX): ");
        scanf("%d", &z);

    }while(z<=0 || z==1 || z>30);

    printf("\n");

    for(i=0;i<z;i++)
    {
        printf("Input number:\t");
        scanf("%d", &num[i]);
    }

    sum(&z, &num, &total, &psum, &nsum);
    average(&z, &total, &avg);

    printf("\n\tTotal = %d\n\tAverage = %0.2f", total, avg);

    printf("\n");

    if(psum)
        printf("\n\tSum of positive numbers = %d", psum);
    if(nsum)
        printf("\n\tSum of negative numbers = %d", nsum);

    printf("\n");

    return 0;

}

//Names of pointers are not too good. But writing them that way helped me knowing was I was doing.

void sum(int* arysize, int* array_adress, int* output_adress, int* pos_adress, int* neg_adress)
{
    int i;

    *output_adress=0;
    *pos_adress=0;
    *neg_adress=0;

    for(i=1;i<=*arysize;i++)
    {
        *output_adress+=*array_adress;

        if(*array_adress<0)
            *neg_adress+=*array_adress;
        else
            *pos_adress+=*array_adress;

        array_adress+=1;
    }
}

void average(int* arysize, int* total_adress, double* output_adress)
{
    *output_adress = (double)*total_adress / *arysize;
}







