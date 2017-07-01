//Write a program to print all prime numbers between 0 and 500.

#include<stdio.h>

int main()
{
    int num=1, i, count;

    while(num<=500){

        count = 0;

        for(i=1;i<=num;i++){
            if(!(num%i))
                count++;
        }
        if(count==2 || num==1)
            printf("\n%d is prime", num);

        num++;
    }


    return 0;
}



















