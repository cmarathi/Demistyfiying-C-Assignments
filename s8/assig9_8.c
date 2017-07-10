//9.Write a C program to sort an array in ascending order

#include<stdio.h>
#include<stdlib.h>

void mintomax(int*, int, char);
void printarray(int*, int);
void movereptolast(int*, int, int*);

int main()
{
    int numlist[14];//Array
    int size, i;    //Size and index of array
    int hsize, f=1; //"hide" size and variable to change menu option
    char ch; //variable for the menu

    size=sizeof(numlist)/sizeof(int);

   //save values in array
    for(i=0;i<size;i++)
    {
        printf("Input number %d:\t", i+1);
        scanf("%d", &numlist[i]);
    }


    //menu with options
    do{

        printf("\nWhat do you want to do?");
        printf("\n\t< - Rearrange array from min to MAX\n\t> - Rearrange array from MAX to min");
        printf("\n\tH - %s repeated numbers\n\t ", f?"Hide":"Show"); //Give option dynamically
        printf("\n\n\t");
        scanf(" %c", &ch);

        switch(ch)
        {
            case 'h': case 'H':
            {
                size=sizeof(numlist)/sizeof(int);

                if(f)
                {
                    movereptolast(&numlist,size,&hsize);
                    size=hsize;
                    f=0;
                }
                else
                    f=1;

                break;
            }

            case '<': case '>':
            {
                mintomax(&numlist, size, ch);

                break;
            }
        }

        printf("\n");

        printarray(&numlist, size);

        printf("\n");

    }while(1);

    return 0;
}

//Rearrange array from min to max or viceversa
void mintomax(int* array_adress, int array_size, char mm)
{
    int i, t; //loop counter and temporal variable

    array_size--;

    //This block should be done placing the loops inside the switch case structure for performance
    //It's done this way so the code it's shorter
    do
    {
        for(i=array_size;i>=1;i--)
        {
            switch(mm)
            {
                case '<':
                {
                    if(*array_adress>*(array_adress+i))
                    {
                        t=*array_adress;
                        *array_adress=*(array_adress+i);
                        *(array_adress+i) = t;
                    }
                    break;
                }
                case '>':
                {
                    if(*array_adress<*(array_adress+i))
                    {
                        t=*array_adress;
                        *array_adress=*(array_adress+i);
                        *(array_adress+i) = t;
                    }
                    break;
                }
            }
        }
        array_adress++;
        array_size--;

    }while(array_size-1);
}

//Move repeated numbers to last positions of the array.
//Then it sets the size of the array in "hide mode"
//I was not able to maintain original order of the array with an efficient solution, so I left it like this.
void movereptolast(int* array_adress, int array_size, int* hidesize_adress)
{
    int i, temp; //loop counter and temporal variable
    int last; //Last position available of the array
    int *realbase;

    realbase=array_adress; //To be able to move a number to the last place

    last=array_size-1;

    while(array_size)
    {
        for(i=1;i<array_size;i++)
        {
            if(*array_adress==*(array_adress+i))
            {
                temp=*(array_adress+i);
                *(array_adress+i)=*(realbase+last);
                *(realbase+last)=temp;

                last--;
                array_size--;
                i--; //To check if the number it just moved from (realbase+last) is equal to array_adress.
            }
        }
        array_adress++;
        array_size--;
    }

    *hidesize_adress=last+1; //Set how many elements it should print when the array is in "hide mode"
}

void printarray(int* array_adress, int size)
{
    while(size)
    {
        printf("%d%s", *array_adress, size-1?", ":".");

        array_adress++;
        size--;
    }
}


