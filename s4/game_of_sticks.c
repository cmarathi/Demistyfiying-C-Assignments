#include<stdio.h>

int main(){

    int n=1;     //Number of sticks input by the player
    int i, sum;  //Operations to get number of sticks
    char yes;    //Repeat program

    printf("Rules are simple:\n\tWe have 21 sticks\n\tWe can pick up 1 to 4 sticks");
    printf("\n\tThe one who is forced to pick up the last stick loses\n\tOh! And you pick first...");
    printf("\n\nLet the game begin.");

    do
    {
        if(yes=='Y' || yes=='y')
            printf("\n\n\tAaaaallright!!! Let me win you again then...");

        printf("\n\n\tWe have 21 sticks left.");

        sum=0;

        do
        {
            do
            {
                printf("\n\n%s\t", (n>4 || !n)?"Read the rules. Only 1 to 4 sticks":"Your turn");
                scanf("%d", &n);

            }while(n>4 || !n);

            sum=sum+n;

            for(i=4;i<=4;i--){
                if( (sum+i)%5 == 0 ){
                    sum=sum+i;
                    break;
                }
                else
                    continue;
            }

            printf("\n\tI pick up %d %s", i,i==1?"stick.":"sticks.");
            printf("\n\tWe have %d %s left.",21-sum, 21-sum==1?"stick":"sticks");

        }while(sum<20);

        printf("\n\n\tI win, you lose.\n\n");

        printf("Do you want to challenge me again? Y/N\t");
        scanf(" %c", &yes);

    }while(yes=='y' || yes=='Y');

    printf("\n\n\tBye bye... LOSER!\n\n");

    return 0;
}
