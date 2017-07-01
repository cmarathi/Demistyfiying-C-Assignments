/*
Write a function factorial to calculate and print factorial
of any number entered through the keyboard.
*/

#include<stdio.h>

int factorial(int);

int main()
{
    int n;

    printf("Input number:\t");
    scanf("%d", &n);

    printf("\n\n\tFactorial of %d is %d\n", n, factorial(n));

    return 0;

}

int factorial(int x)
{
    int i;
    int fact=1;

    for(i=x;i>0;i--)
    {
        fact=fact*i;
    }

    return fact;
}
