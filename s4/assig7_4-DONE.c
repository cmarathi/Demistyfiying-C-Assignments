/*
Write a C program to print first n numbers of Fibonacci series where n is the value given by the user.
For example if user enters 6 then output should be 0…1…1….2….3…..5
*/

#include<stdio.h>

int main(){

/*float*/ int i, n;
    int x=0,y=1,z;

    printf("\nEnter the amount of Fibonacci Numbers you want to print:\t");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++){
        printf(" %d",x);

        z=x+y;
        x=y;
        y=z;

        if(i%5 == 0)            //Problem. Float cannot make use of %
            printf("\n\n");
    }

printf("\n");

return 0;











}
