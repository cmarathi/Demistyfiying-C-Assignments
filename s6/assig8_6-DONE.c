/*
Any integer is input from the keyboard.
Write a function to reverse an integer and print using C language.
For example if user enters 12323 then output should be 32321
*/

#include<stdio.h>

int reverse(int);
int counter(int);

int main()
{
    int n, i;

    printf("Input number:\t");
    scanf("%d", &n);

    printf("\n");


    for(i=counter(n);i>counter(reverse(n));i--)
    {
        printf("0");
    }

    printf("%d\n\n", reverse(n));

    return 0;
}

int counter(int x)
{
    int count=0;

    while(x)
    {
        count++;
        x=x/10;
    }

    return count;
}

int reverse(int x)
{
    int rev=0;

    while(x)
    {
        rev= rev*10+ x%10;
        x=x/10;
    }

    return rev;
}
