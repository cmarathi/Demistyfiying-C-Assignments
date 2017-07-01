/*Marks of 3 subjects are input through the keyboard. Write a program to print total and percentile marks
for 3 students using any appropriate loop control structure
*/

#include<stdio.h>

int main()
{
int m1, m2, m3, total, i=1;
float average;

do{
    printf("\nMarks for Student %d", i);
    printf("\nSubject 1:\t");
    scanf("%d", &m1);
    printf("Subject 2:\t");
    scanf("%d", &m2);
    printf("Subject 3:\t");
    scanf("%d", &m3);

    total = m1+m2+m3;
    average = (float)total/3;

    printf("\nTotal is%4d. Average is %4.2f\n", total, average);

    i++;
}while(i<=3);

return 0;






}
