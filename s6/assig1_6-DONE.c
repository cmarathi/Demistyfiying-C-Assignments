/*
Write a C program to find sum of two integers using function sum( )
and product of same integers using function product( ).
*/

#include<stdio.h>

int addition(int, int);
int product(int, int);

int main()
{
    int n,  i, number;
    int suma=0, mult=1;

    for(i=1;i<=7;i++)
    {
        printf("Input number %d:\t", i);
        scanf("%d", &n);

        number = suma;
        suma= addition(suma, n);

        if(i!=1)
        {
            printf("\n%d + %d = %d", number, n, suma);
        }

        number = mult;
        mult= product(mult, n);

        if(i!=1)
        {
            printf("\n%d * %d = %d\n\n", number, n, mult);
        }
    }



    return 0;
}

int addition(int x, int y)
{
    return x+y;
}

int product(int x, int y)
{
    return x*y;
}
