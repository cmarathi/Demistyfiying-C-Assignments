#include<stdio.h>
int main()
{
    char ch;
    int n;
	int armnum, temp;
	int x, sum;


	do
    {
        printf("Show armstrong for the first... How much numbers?\t");
        scanf("%d", &n);

        for(armnum = 0; armnum<=n; armnum++)
        {
            sum=0;
            temp = armnum;

            while(armnum){
                x = armnum%10;
                sum = sum+x*x*x;
                armnum = armnum/10;
            }

            armnum=temp;

                if(armnum == sum /* && sum* -> In case 0 is not armstrong*/)
                    printf("\n%4d",armnum);


            //  printf("\n%d is %s", armnum, sum==armnum?"armstrong":"NOT armstrong");
        }

        printf("\n\n");
        printf("\tY to do it again\t");
        scanf(" %c", &ch);
        printf("\n");

	}while(ch=='y' || ch=='Y');

	printf("\n\n");

	return 0;
}
