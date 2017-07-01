/*
Two integer numbers are input through the keyboard. Write a C program to print one number raised to
other number. For example if user enters 4 and 3 then output should be 4 raised to 3
*/

/*
#include<stdio.h>

int main(){

int x, y, raise, i, z;

printf("\nEnter one number:\t");
scanf("%d", &x);
printf("Raise to?\t\t");
scanf("%d", &y);

z=x;

for(i=1;i<y;i++){
    raise=z*x;          //I think this loop can be done better.
    z=raise;
}
if(!y) //
    printf("Error?¿?¿?¿?¿?¿?\n\n"); //I don't know how x raised to 0 should work. Need to learn Math.
else
    printf("\n%d raised to %d is: %d\n\n", x, y, y==1?x:raise);  //Ugly "fixes" because loop could be done better

return 0;

}
*/

#include<stdio.h>

int main()
{
	int x, y, raise;
	int i;

	printf("\nEnter one number:\t");
	scanf("%d", &x);
	printf("Raise to?\t\t");
	scanf("%d", &y);

	raise = 1;			// this is important step. It would solve your all queries

	for(i=1;i<=y;i++)
	{
    	raise = raise * x;          //I think this loop can be done better.
 	}

	printf("%d raised to %d = %d\n",x,y,raise);
	return 0;
}


