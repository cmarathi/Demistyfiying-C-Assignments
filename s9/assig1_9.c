/*
1.A multi word string is input through the keyboard.
Write a C program using function to convert
lower case letter into upper case and upper case letters into lower case and print it.
*/

#include<stdio.h>

void low_up(char*);

int main()
{
    char name[80];

    printf("Enter a string: ");
    gets(name);

    low_up(name);

    printf("\n%s\n", name);

    return 0;

}

void low_up(char* str)
{
    while(*str!='\0')
    {
        if(*str>=65 && *str<=90)
        {
            *str+=32;
            str++;
            continue;  //Is this faster than else if structure?         // Not a bad idea
        }
        if(*str>=97 && *str<=122)
            *str-=32;

        str++;
    }
}
