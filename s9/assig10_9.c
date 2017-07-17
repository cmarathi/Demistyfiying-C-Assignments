/*
10.A multi word string is input through the keyboard.
Write a C program to search a particular word in a string
and replace it by other word suggested by the user.
*/
/*
Example run:
    Input text - > Dennis is a man.Dennis Ritchie can walk. denNis is dennis.
    Input word to be replaced -> Dennis

    case 1:
        Input word to replace to -> dennis

        Output: dennis is a man.dennis Ritchie can walk. denNis is dennis.

    case 2:
        Input word to replace to -> Dennis Ritchie

        Output: Dennis Ritchie is a man.Dennis Ritchie Ritchie can walk. denNis is dennis.
*/

//PROGRAM WILL CRASH IF(SIZE_OF_STRING > STRING_CAPACITY) AFTER REPLACING WORDS.

#include<stdio.h>
#include<string.h>

int compare(char*, char*, int);
void copy(char*, char*, int);
void replace_words(char*, char*, char*);

int main()
{
    char text[500], search[20], replace[20];

    printf("Input text -> ");
    gets(text);

    while(1)
    {
        printf("Input word to be replaced -> ");
        gets(search);

        printf("Input word to replace to -> ");
        gets(replace);


        replace_words(text, search, replace);

        printf("\n%s\n\n",text);
    }

    return 0;
}

void replace_words(char* text, char* search, char* replace)
{
    char *str;
    int count, count2;
    int len, s_len, r_len;

    s_len=strlen(search);
    r_len=strlen(replace);


    while(*text!='\0')
    {
        if((*text>=65 && *text<=90) || (*text>=97 && *text<=122)) //This is to start counting if the word starts by an alphabet
        {
            count=0;
            str=text;

            while((*str>=65 && *str<=90) || (*str>=97 && *str<=122) || *str==39) //while *str is an alphabet or '
            {
                str++;
                count++; //count number of characters of a word
            }

            if(compare(text, search, count)) //If the word is equal to the search word
            {
                len=strlen(text);
                count2=((s_len-r_len)*(-1)); //To know which word is bigger, replace or search

                if(count2>0) //If the replace word is bigger than the search word
                {
                    str=text+len;

                    while(str!=text) //Make room in the string
                    {
                        *(str+count2)=*str;
                        str--;
                    }
                }
                else if(count2<0) //if the replace word is smaller than the search word
                {
                    str=text+count;

                    while(str!=text+len+1) //Make the string shorter
                    {
                        *(str+count2)=*str;
                        str++;
                    }
                }

                copy(text,replace,r_len); //Copy the replace word in the string
                text+=r_len;
                continue;
            }

            text+=count; //advance to find the next word.
            continue;
         }

         text++;
     }
}

int compare(char* str, char* str_b, int size)
{
    int len=strlen(str_b);

    while(size || len )
    {
        if(*str==*str_b) //modify this to make it case insensitive
        {
            str++;
            str_b++;
            size--;
            len--;
        }
        else
            return 0;
    }

    return 1;
}

void copy(char* str, char* str_b, int size)
{
    while(size)
    {
        *str=*str_b;

        str++;
        str_b++;
        size--;
    }
}
