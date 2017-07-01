/*
Any positive integer is entered through the keyboard.
Write a program to print the number in words…
For example if 324 is entered through the keyboard, the output should be Three Two Four…
and if 12354 is entered through the keyboard the output would be One Two Three Five Four
*/

/*
I think it would be more effective to get the digits and save them in an array
then print from the last element of the array to the first element.
that way I don't have to get the digits two times.
And maybe I won't have the problem with 0
*/

//Revisit when I learn about arrays.

#include<stdio.h>

int main(){

    int n;      //Number input by user
    int count, count2; //Count to know number of digits
    int invert, digit; //print n in the right order

    printf("Input number:\t");
    scanf("%d", &n);

    printf("\n");

    if(!n){
        printf("Zero.\n\n");

        return 0; //I think I have to modify this in case I want to add an option to run the program again
    }

    count=0;
    invert = 0;
    while(n){
        invert=invert*10+n%10; //invert order of digits of n so I can print them in the right order
        n=n/10;                //Problem with numbers ended in 0
        count++;
    }

    count2=0;
    while(invert){
        count2++;
        digit=invert%10;        //get digits of invert and "interprete/translate" them.

        switch(digit){
            case 0:
                printf("Zero");
                break;
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
        }

        if(count2<count)
            printf(", ");       //Print ', ' or '.' depending if it's last digit or not.
        if(count2/count)
            printf(".");

        invert=invert/10;
    }

    while(count2<count){//print zeros to solve the invert problem
        count2++;
        printf("Zero");
        if(count-count2)
            printf(", ");
        else
            printf(".");
    }

    printf("\n\n");

    return 0;
}



















