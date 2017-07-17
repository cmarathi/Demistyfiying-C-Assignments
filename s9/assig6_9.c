/*
6.Two strings, One string containing single word and other multi word string
are input through the keyboard. Write a C program to
determine whether first string is sub string of second string.
*/
/*
Example run:
    Input Text -> Dennis Ritchie is a smart man.Dennis Ritc can walk but Dennis ritchie can't fly.
    Highlight(exact substring) -> Dennis Ritch

    Output    -> (Dennis Ritch)ie is a smart man.Dennis Ritc can walk but Dennis ritchie can't fly.
*/


#include<stdio.h>
#include<string.h>

void print_highlight(char*, char*);

int main()
{
    char text[200], search[20];

    printf("Input Text -> ");
    gets(text);

    printf("\nHighlight(exact substring) -> ");
    gets(search);

    printf("\n");
    print_highlight(text,search);
    printf("\n");

    return 0;

}
//Print a text with the desired substring highlighted in ().
//It has to be exact. Also it IS case sensitive.
void print_highlight(char* text, char* search)
{
    char *ps, *pt; //pointers to compare strings
    int z; //Indicates if search is a substring of text
    int count, len; //Size of substring to print () correctly

    len=strlen(search);

    while(*text!='\0')
    {
        pt=text;
        ps=search;
        z=0;

        while(*ps!='\0' && *pt!='\0' && *ps==*pt)
        {
            ps++;
            pt++;
            z=1;

            if(*ps!='\0' && *ps!=*pt)
            {
                z=0;
                break;
            }
        }

        if(z)
        {
                printf("(");
                count=len; //count=len instead of count=strlen(search) give better performance

                while(count && *text!='\0')
                {
                    printf("%c", *text);
                    text++;
                    count--;
                }

                printf(")");

            if(*text=='\0')
                break;
        }
        else
        {
            printf("%c", *text);
            text++;
        }
    }

}
