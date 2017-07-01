/*
Write a function pow(x,y) to calculate the value of x raised to y
*/

#include<stdio.h>

double pow(int, int); //Conflicting types????

int main()
{
    int n, z;

    printf("\nInput number:\t");
    scanf("%d", &n);
    printf("Raise to?\t");
    scanf("%d", &z);

    printf("\n\t%d ^ %d = %0.0f\n", n, z, pow(n, z));

    return 0;
}

double pow(int x, int y)
{
    double power=1;

    while(y)
    {
        power=(double)power*x;

        y--;
    }

    return power;
}
