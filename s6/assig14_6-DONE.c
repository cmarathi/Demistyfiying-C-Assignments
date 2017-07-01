/*
A positive integer is input through the keyboard.
Write a function to obtain the prime factors of this number.
For example prime factors of 56 are 7, 2, 2 and 2 where as prime factors of 26 are 13 and 2
*/

#include<stdio.h>

int lowprime(int);

int main()
{
    int n;

    printf("Input number:\t");
    scanf("%d", &n);

    printf("\n\tPrime factors of %d are: ", n);

    while(n>1)
    {
        printf("%d", lowprime(n));

        n= n/lowprime(n);

        printf("%s", n>1?", ":".");
    }

    printf("\n\n");

    return 0;
}

int lowprime(int x)
{
    int i;
    int f, count;

    for(i=1;i<=x;i++)
    {
        count=0;

        for(f=1;f<=i;f++)
        {
            if(i%f==0)
                count++;
        }

        if(count==2 && x%i==0)
            break;
        else
            continue;
    }

    return i;
}
