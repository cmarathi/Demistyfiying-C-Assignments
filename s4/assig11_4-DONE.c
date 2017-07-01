/*
Write a C program find and print highest marks in the class for particular subject using loop.
Make arrangement to accept marks of as many students as user wishes.
*/



#include<stdio.h>

int main(){

    int x, i, mark, big=0;

    printf("How many students you want to compare?\t");
    scanf("%d", &x);
    printf("\n");

    for(i=1;i<=x;i++){
        printf("Input mark of student %d:\t", i);
        scanf("%d", &mark);

        if(mark>big)
            big=mark;
    }

    printf("\nHighest mark in the class is: %d\n\n", big);

return 0;
}
