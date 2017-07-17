/*
5.A multi word string is entered through the keyboard.
Write a C program using function to find the largest and smallest word in a given string.

7.A multi word string is input through the keyboard
and a single word from the string itself is also taken from the user.
For example a string entered is "She sells sea shells at the sea shore of pacific sea coast".
Write a C program to find number of word "Sea" appears in a given string.
*/

//This one can count the number of words and size of each word. Among other things.
//Does not accept characters like 'í', 'ü', etc. Can be modified to accept them.
//Also, I would like to create int list[][] and char words[][] in a dynamic way.
/*
Note:
    The idea is to create a database of how much words there is and it's sizes, and the words themselves
Note2:
    Modify "assig7 part of the program" in the future to make it with functions.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char name[500], words[50][50], s_word[50]; //Original string and array of strings to save separate words.
    int f=0, y; //Index for words[][]
    int list[50][2], i=0; //2D array to save number of word and it's size. i=index.
    int count=0, count2, countw;  //Count number of words. Count number of characters of a word. Count how many times a given word repeats
    int small=50, big=0; //Save smallest and biggest number of characters in a word

    char* str;

    str=name;

    printf("Enter string -> ");
    gets(name);

    while(*str!='\0')
    {
        if((*str>=65 && *str<=90) || (*str>=97 && *str<=122)) //This is to start counting if the word starts by an alphabet
        {
            //Initialize variables for each iteration
            count2=0;
            y=0;

            count++;

            while((*str>=65 && *str<=90) || (*str>=97 && *str<=122) || *str==39) //while *str is an alphabet or '
            {
                words[f][y]=*str; //save those characters in words[][] to create a string for database
                str++;
                y++;
                count2++; //count number of characters of a word
            }

            words[f][y]='\0'; //to end the string correctly

            f++;

            if(count2<small)    //Save smallest and biggest num of chars of a word
                small=count2;
            if(count2>big)
                big=count2;

            list[i][0]=count;       //make database with the number of the word and it's size.
            list[i][1]=count2;

            i++;
         }

        if(*str!='\0')
            str++;
    }

    printf("\n\tSmallest number of chars in a word = %d\n\tBiggest number of chars in a word = %d", small, big);
    printf("\n\n");

    printf("Words with %d chars are:\n", big);

    //loop to print words that are same size as biggest word. It also tells the position of those words in given string.
    for(i=0; i<count;i++)
    {
        if(list[i][1]==big)
            printf("\n\t #%d - %s",list[i][0],words[i]);
    }

    while(1)
    {
        printf("\n\n");

        do
        {
            printf("Input # of word to know it's size (1 to %d): ", count);
            scanf("%d", &i);
        }while(i<1 || i>count);

        //print number of characters of desired word. Also print the word itself.
        printf("\n\tword #%d -> \"%s\", %d characters.", i, words[i-1], list[i-1][1]);

        //assig7 part of the program
        printf("\n\nInput word to know how many times it appears: ");
        fflush(stdin);
        scanf("%s", s_word);

        countw=0;

        printf("\n\tThe word <%s> appears in pos ");

        for(i=0;i<count;i++)
        {
            if(!strcmp(s_word, words[i]))
            {
                countw++;
                printf("#%d%s ", i+1, i+1<count?", ":"."); //print what positions the word appears in
            }
        }

        printf("\n\tA total of %d times", countw); //print total of times that word appears

    }

    return 0;
}
