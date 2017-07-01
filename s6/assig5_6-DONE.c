/*
An integer is input through the keyboard.
Write a C program using function isoddeven() to determine whether the integer is odd or even.
Modify program to take as many values as user wants to enter.
*/

#include<stdio.h>
int isoddeven(int);

int main()
{
    int n;

    do{
        printf("\n\nInput number:\t");
        scanf("%d", &n);

        printf("\n\t%d is %s", n, isoddeven(n)?"even":"odd");

    }while(1);

    return 0;
}

int isoddeven(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
        return 0;
}
