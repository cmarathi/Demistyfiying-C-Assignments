/*
8.A multi word string is input through the keyboard.
Write a C program to reverse each word of the string and print it.
*/
//Does not accept characters like 'í', 'ü', etc. Can be modified to accept them.
//Only reverse words. Numbers and punctuation marks remain the same.
/*
Example run:
    Input text -> Hello! My favorite número isn't 123.

    Output     -> olleH! yM etirovaf núorem t'nsi 123.

*/

#include<stdio.h>

void rev(char*, char*);
void reverse_words(char*); //dependent of rev

int main()
{
    char text[80];

    printf("Input text -> ");
    gets(text);

    reverse_words(text);

    printf("\n\n%s\n", text);
}

void reverse_words(char* text)
{
    char *str;
    int count;

    while(*text!='\0')
    {
        if((*text>=65 && *text<=90) || (*text>=97 && *text<=122)) //This is to start counting if the word starts by an alphabet
        {
            //Initialize variables for each iteration
            count=0;
            str=text;

            while((*str>=65 && *str<=90) || (*str>=97 && *str<=122) || *str==39) //while *str is an alphabet or '
            {
                str++;
                count++; //count number of characters of a word
            }

            rev(text, str-1); //Reverse content between 2 pointers.

            text+=count; //advance to find the next word.
            continue;
         }

         text++;
     }


}

void rev(char* str, char* str_b)
{
    char t;

    while(str<str_b)
    {
        t=*str;
        *str=*str_b;
        *str_b=t;

        str++;
        str_b--;
    }
}
