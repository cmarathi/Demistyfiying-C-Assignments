/*
4.A string containing single word is entered through the keyboard.
Write a C program using user defined function to check whether the string is palindrome or not.
*/

// Example of working string: AnA    laVa LaNa

#include<stdio.h>
#include<string.h>

int ispalindrome(char*);

int main()
{
    char name[80];

    printf("Enter word: ");
    gets(name);

    printf("\n\t%s -> %s\n", name, ispalindrome(name)?"palindrome":"NOT palindrome");

    return 0;
}
//Works for multi-word strings with any number of spaces between words.
//Doesn't work with special characters (just modify structure to include more characters)
//Also ignores upper/lower case. For the program a==A
int ispalindrome(char* str)
{
    char *last;

    last=str+strlen(str)-1;

    while(str<last)
    {
        while(*str==32)
            str++;
        while(*last==32)
            last--;

        if( *str==*last || *str+32==*last || *str-32==*last )
        {
            str++;
            last--;
        }
        else
            return 0;
    }

    return 1;
}
