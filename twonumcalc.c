/*
Write a menu driven program to print result of various operations on two integers.
Two integers would be entered by the user and then user should be given prompt
to select operation of his choice to perform on these two integers. The program should give
output on the basis of choice selected by the user.
*/

#include<stdio.h>

int main(){

    int n1, n2;  //Numbers entered by the user
    int operation; //Operation user wish to perform
    double result;
    char sign; //Change "operator" for visual reference.
    char uChose=68; //Variable for loops. Initialized to D so it enters in all ifs until user changes it

do //"Security loop" for final exit of the program. If uChose=b it comes back here.
{
 do //In case of uChose=(d or s) it takes you here
 {
    if(uChose==100 || uChose==68||uChose==83||uChose==115)  //writing it in asci to check if it works with != operator. I doesn't
    {//Condition to ignore this block in case uChose=b. Really to enter here if uChose=(d or s)
        printf("Input number one:\t");
        scanf("%d", &n1);
        printf("Input number two:\t");  //I don't know how to make error message if user enters a non-int input
        scanf("%d", &n2);
    }

    do //Takes you here while uChose=a
    {
        if(uChose==100 || uChose==68|| uChose=='a'|| uChose=='A'||uChose=='s'||uChose=='S')
        { //Condition to ignore this block in case uChose=b. Really to enter here if uChose=(d or a or s)

            if(uChose=='d' || uChose=='D'|| uChose==97|| uChose==65){   //I would like to write uChose!='s', but it doesn't work.
                printf("\nWhat operation do you want to perform?(Input left number)\n\n"); //I don't like to work with characters.
                printf("\t1 - Addition\t\t'+'\n\t2 - Substraction  \t'-'\n\t3 - Multiplication  \t'*'\n\t4 - Division\t\t'/'\n");
                printf("\n\t");
                scanf("%d", &operation);

                while(operation>4 || !operation){ //error in case input is not in the menu
                    printf("Error. Input the number to the left of the menu to perform wished operation");
                    scanf("%d", &operation);
                }
             }

            switch(operation) //Perform wished operation based in menu
            {
                case 1:
                    result=n1+n2;
                    sign='+';
                    break;
                case 2:
                    result=n1-n2;
                    sign='-';
                    break;
                case 3:
                    result=n1*n2;
                    sign='*';
                    break;
                case 4:
                    result=(double)n1/n2;
                    sign='/';
                    break;
             }

            printf("\n\t%d %c %d = %0.2f\n\n",n1,sign, n2, result); //print the result

        }

        //Menu to do different things described in it
        printf("What do you want to do now?\n\n");
        printf("\tA - Different operation with same numbers\n\tS - Same operation with different numbers");
        printf("\n\tD - Different operation with different numbers\n");
        scanf(" %c", &uChose);

    }while(uChose=='a'||uChose=='A');
                                                //Loops to re-do things based on user's choice
 }while(uChose=='d'||uChose=='D'||uChose=='s'||uChose=='S');

    printf("\n\nYou will exit the program. Press B to go back.\t");
    scanf(" %c", &uChose);
    printf("\n");
                                            //Maybe the loops could've been done more efficiently
}while(uChose == 'b' || uChose == 'B');     //specially this one.

        return 0;


}
