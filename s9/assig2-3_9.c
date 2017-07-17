/*
2.A multi word string is input through the keyboard.
    Write a C program to count number of words in a given string.
3.A multi word string is input through the keyboard.
    Write a C program to find number of vowels and consonants in a given string.
*/

#include<stdio.h>

int countwords(char*);
void vowcons(char*, int*, int*);

int main()
{
    char name[200];
    int vownum=0, consnum=0;

    printf("Enter string: ");
    gets(name);

    vowcons(name, &vownum,&consnum);

    printf("\n\tNumber of words = %d", countwords(name));
    printf("\n\tNumber of vowels = %d\n\tNumber of consonats = %d\n", vownum, consnum);

    return 0;

}

//It's able to count words in a sentence like this:
//"Hi! my?  name, .isn't ''... Lorenzo  ." -> Will return 5.
/*
Note:
    To accept characters like 'ñ', 'í', 'ü', etc, just modify structure to add them
*/
int countwords(char* str)
{
    int count=0;

    while(*str!='\0')
    {
        if((*str>=65 && *str<=90) || (*str>=97 && *str<=122))
        {
            while((*str>=65 && *str<=90) || (*str>=97 && *str<=122) || *str==39)
            {
                str++;
            }

            count++;
        }

        if(*str!='\0')
            str++;
    }

    return count;
}

void vowcons(char* str, int* vow_count, int* cons_count)
{
    while(*str!='\0')
    {
        if((*str>=65 && *str<=90) || (*str>=97 && *str<=122))
        {
            if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u') //Add conditions for other characters (like upper case)
                *vow_count+=1;
            else
                *cons_count+=1;
        }

        str++;
    }
}
