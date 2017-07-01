/*
Write a program to print sum of integers. At the beginning user will be asked how many numbers he is
going to enter. The output should be sum of all numbers entered by the user. (For example if user enters
6 at the beginning, then user will be prompted to enter 6 integers)
*/

//I think I can do this with an array. I don't know where to save the numbers otherwise.
//DONE. But I still think It can be done with an array. But is it more effective?

#include<stdio.h>

int main()
{
int i, j, num1,sum=0;

printf("\nHow many Integer do you want to add?\t");
scanf("%d",&j);
printf("\n");

for(i=1;i<=j;i++){
    printf("Input num %d:\t", i);
    scanf("%d",&num1);

    sum += num1;

    if(i!=j && i!=1)
        printf("Sum of first %d nums is: %d\n\n",i, sum);
}

printf("\nTotal sum is: %d\n\n", sum);

return 0;










}
