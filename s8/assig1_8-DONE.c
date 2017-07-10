/*
1.
Write a C program to sum and average of an array containing integers.
Take integer input from user. User input may be positive or negative or zero.
Sum of negative integers and positive integers should be printed separately.

(Note: Write whole program in single function i.e. main function)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, num[6];
    int total=0, nsum=0, psum=0;
    double average;

    for(i=0;i<sizeof(num)/sizeof(int);i++)                      // Good Logic
    {
        printf("Input number %d:\t", i+1);
        scanf("%d", &num[i]);

        if(num[i]<0)
            nsum+=num[i];
        else
            psum+=num[i];

        total+=num[i];
    }

    average=(double)total/(i);

    printf("\n\n\tTotal = %d\n\tAverage = %0.2f", total, average);

    printf("\n");

    if(psum)
        printf("\n\tSum of positive numbers = %d", psum);
    if(nsum)
        printf("\n\tSum of negative numbers = %d", nsum);

    printf("\n");

    return 0;
}
