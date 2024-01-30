//Program: Find length of the largest word 

#include <stdio.h>
#include <string.h>

int largest_word (char *s);  // find length of longest word
void largest_word2 (char *s, char *longest_word);  // find logest word

int main()
{
  // test out the function with a test string
    char s[] = "This is, theres way Again...";
    int largest_length = largest_word(s);
    char temp[100];

                                                             
    
    printf("%s\n", s);
    largest_word2(s, temp);
    printf("%s\n", temp);
    printf("%d\n", largest_length);

  return 0;
}

int largest_word(char *s)
{
    int max = 0; 
    int len = strlen(s);
    int count = 0; 
    char non_words[] = " ,;.\n\t";
    
    int i = 0;
    
    while (i < len)  
    {
        while (i < len && strchr(non_words, s[i]) == NULL) // count char in a word
        {   
            i ++;
            count ++;
        }
    
        if (count > max) max = count;
    
        while (i < len && strchr(non_words, s[i]) != NULL) // skip non-word characters
        {
            i ++;
        }
    
        count = 0; // reset the count
    }

    return max;
}

void largest_word2(char *s, char *longest_word)
{
    int max = 0; 
    int len = strlen(s);
    int count = 0; 
    char non_words[] = " ,;.\n\t";
    
    int i = 0;
    
    while (i < len)  
    {
        while (i < len && strchr(non_words, s[i]) == NULL) // count char in a word
        {   
            i ++;
            count ++;
        }
    
        if (count > max) 
        {
            max = count;
            strncpy(longest_word, &s[i - max] , max);  // copy the longest word to temp   
            longest_word[count] = '\0';  // don't forget to null-terminate the string
        }
        
        while (i < len && strchr(non_words, s[i]) != NULL) // skip non-word characters
        {
            i ++;
        }
    
        count = 0; // reset the count
    }
}
