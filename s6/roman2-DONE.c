//Write a general purpose function to convert any given year into its roman equivalent.


#include<stdio.h>

int roman(int);

int main()
{
    int year, y2;
    int total;

    printf("\nInput year:\t");
    scanf("%d", &year);
    printf("Input year:\t");
    scanf("%d", &y2);

    total = year +y2;

    printf("\n\t");

    roman(year); printf(" + "); roman(y2); printf(" = "); roman(total);

    printf("\n\n");

    return 0;
}

int roman(int x)
{
    int count=0; //know if 1, 10 or 100.
    int inverse=0; //get last 3 digits of x
    int i, digit; //digits of inverse and variable for loops

    while(count<3)  //get last 3 digits of x
    {
        inverse = inverse*10 + x%10;
        count++;
        x=x/10;
    }

    for(i=1;i<=x;i++) //print "Thousands"
    {
        printf("M");
    }

    while(inverse) //"Translate" each of the last 3 digits of x
    {
        digit = inverse%10;

        if(digit<4)
        {
            for(i=1;i<=digit;i++)
            {
                if(count==3)
                    printf("C");           //Is this faster...
                else
                {
                    if(count==2)
                        printf("X");

                    else
                        printf("I");
                }
            }
        }

        if(digit==4)
        {
            if(count==3)
                printf("CD");           //...than this?
            if(count==2)
                printf("XL");          //This is easier to write
            if(count==1)
                printf("IV");
        }

        if(digit>4 && digit<9)
        {
            if(count==3)
            {
                printf("D");

                for(i=1;i<=(digit-5);i++)
                    printf("C");
            }
            if(count==2)
            {
                printf("L");

                for(i=1;i<=(digit-5);i++)
                    printf("X");
            }
            if(count==1)
            {
                printf("V");

                for(i=1;i<=(digit-5);i++)
                    printf("I");
            }
        }

        if(digit==9)
        {
            if(count==3)
                printf("CM");
            if(count==2)
                printf("XC");
            if(count==1)
                printf("IX");
        }

        inverse = inverse/10;
        count--;
    }

    return 0;
}
