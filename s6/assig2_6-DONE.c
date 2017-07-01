/*
2. Length and breadth of rectangle are input through the keyboard.
    Write a C program using function to calculate and print area of rectangle
3. Radius of a circle is entered through the keyboard.
    Write a C program to print area of a circle and circumference of a circle using functions.
*/

//Assignments 2 and 3 combined.

#include<stdio.h>

int recarea(int, int);
double circlecircum(int);
double circlearea(int);

int main()
{
    char option;
    int lenght, breadth;
    int radius;

    printf("\nWhat do you want to do?");
    printf("\n\tR - Area of a rectangle\n\tC - Area and circumference of a circle");
    printf("\n\n\t");
    scanf(" %c", &option);


    if(option == 'R' || option =='r')
    {
        printf("\nInput lenght:\t");
        scanf("%d", &lenght);
        printf("Input breadth:\t");
        scanf("%d", &breadth);

        printf("\n\nArea of rectangle is %d\n\n", recarea(lenght, breadth));
    }

    if(option == 'C' || option == 'c')
    {
        printf("\nInput radius:\t");
        scanf("%d", &radius);

        printf("\n\nArea of circle is %0.2f", circlearea(radius));
        printf("\nCircumference of circle is %0.2f\n\n", circlecircum(radius));
    }

    return 0;
}

int recarea(int b, int h)
{
    int a;

    a=b*h;

    return a;
}

double circlearea(int r)
{
    double a;

    a=r*r*3.14;

    return a;
}

double circlecircum(int r)
{
    double circum;

    circum = 2*3.14*r;

    return circum;
}

