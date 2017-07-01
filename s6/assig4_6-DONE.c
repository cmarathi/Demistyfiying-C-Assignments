/*
Marks of five subjects are entered through the keyboard.
Write a C program using function to print total marks and percentile marks.
*/

#include<stdio.h>

int addition(int, int);
float percentile(int, int);

int main()
{
    int i, n;
    int mark, total=0;

    printf("\nEnter number of subjects:\t");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        printf("Input mark %d:\t", i);
        scanf("%d", &mark);

        total=addition(total, mark);
     }

     printf("\n\nTotal marks is: %d", total);
     printf("\nPercentile is: %0.2f\n\n", percentile(total, n));

     return 0;
}

int addition(int x, int y)
{
    int sum;

    sum=x+y;

    return sum;
}

float percentile(int x, int y)
{
    float per;

    per=(float)x/y;

    return per;
}
