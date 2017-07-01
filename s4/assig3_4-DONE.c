/*
Write a program to print factorial of any positive integer entered by the user through the keyboard.
*/

#include<stdio.h>

int main()
{
    int n, i;
    double factorial=1;

    printf("\nInput number:\t");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("\nFactorial of %d = %0.0f\n\n", n, factorial);

    return 0;
}
