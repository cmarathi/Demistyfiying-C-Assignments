/*
Write a C program to find HCF and LCM of any two numbers entered through the keyboard
*/

//HCF (div in main function) works for any number of integers >0 (I think)
//LCM (mul in main function) works for any number of integers >0 (I think)



#include<stdio.h>

int lowprime(int); //Get lowest prime factor of an integer
int countlow(int, int); //Count how many times x is divisible by y
int pow(int, int);  //Raise x to y
int hcf(int, int);  //Get HCF of two integers (need all of the above functions)
int lcm(int, int);  //Get LCM of two integers (need all of the above functions)

int main()
{
    int z; //amount of numbers user wants to enter
    int n1, n2; //numbers entered by user
    int div, mul; //variables to save HCF and LCM

    printf("\nHow many numbers do you want to enter?\t");
    scanf("%d", &z);


        printf("\n\nInput number:\t");
        scanf("%d", &n1);

        div=n1;
        mul=n1;

        do
        {
            printf("Input number:\t");
            scanf("%d", &n2);

            div=hcf(div, n2); //this can be done like n1=hcf(n1, n2) to use 1 less variable.
            mul=lcm(mul, n2);

            z--;

        }while(z-1>=1);


        printf("\n\tHCF = %d", div);
        printf("\n\tLCM = %d\n\n", mul);

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

        if(count==2 && x%i==0) //check if i is prime and divisible by x
            break;
        else
            continue;
    }

    return i;
}

int countlow(int x, int y)
{
    int count=0;

    while(x%y==0)
    {
        count++;
        x=x/y;
    }

    return count;
}

int pow(int x, int y)
{
    int power=1;

    while(y)
    {
        power=power*x;

        y--;
    }

    return power;
}

int hcf(int n1, int n2)
{
    int mcd=1;
    int temp=n2;

    do
    {               //compare primes of n1 with primes of n2
        do
        {
            if(lowprime(n1)==lowprime(n2) ) //if primes are equal, save the one with lower exponent
            {
                if(countlow(n1,lowprime(n1))>countlow(n2,lowprime(n2)))

                    mcd=mcd*pow(lowprime(n2), countlow(n2,lowprime(n2)));

                else
                    mcd=mcd*pow(lowprime(n1), countlow(n1,lowprime(n1)));

                break;
            }

            else
                n2=n2/pow(lowprime(n2), countlow(n2,lowprime(n2)));


        }while(n2>1);

        n2=temp;

        n1=n1/pow(lowprime(n1), countlow(n1,lowprime(n1)));

    }while(n1>1);

    return mcd;
}

int lcm(int n1, int n2)
{
    int mcm;
    int t1=n1, t2=n2;

    n1=n1/hcf(t1, t2);
    n2=n2/hcf(t1, t2);

    mcm=n1*n2*hcf(t1, t2);

    return mcm;
}

