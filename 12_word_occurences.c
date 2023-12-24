#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int word_count(char *string, char *word);

int main(void)
{
    char s1[] = {"Hello my fucking world hello world"};
    char w[] = "world";
    
    int count = word_count(s1, w);
    printf("%d", count);
    return 0;
}

int word_count(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1; // +1 is for '\0'
    int count = 0;

    for(int i = 0; i < end; i++ )
    {
        // loop to match the word to the string
        int j;
        for (j = 0; j < wlen; j++)
        {
            if (word[j] != string[i+j])
            {
                break;     // if the first char of the word does not match in  
                           //string then break if match continue to increase j
            }    
        }
        if (j == wlen) // meaning that the inner loop in the word is completed -> word found
        {
            count ++;
        }
    }
    return count;
}
