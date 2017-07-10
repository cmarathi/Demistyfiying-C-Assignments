#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numlist[7];
    int i, f, temp, size;

    for(i=0;i<sizeof(numlist)/sizeof(int);i++)
    {
        printf("Input number:\t");
        scanf("%d", &numlist[i]);
    }

    size=sizeof(numlist)/sizeof(int) - 1;

    for(f=0;f<sizeof(numlist)/sizeof(int);f++)
    {
        for(i=size;i>=1;i--)
        {
            if(numlist[f]<numlist[f+i])
            {
                temp=numlist[f+i];
                numlist[f+i]=numlist[f];
                numlist[f]=temp;
            }
        }

        size--;
    }

    for(i=0;i<sizeof(numlist)/sizeof(int);i++)
    {
       printf("\n%d", numlist[i]);
    }

    return 0;
}
