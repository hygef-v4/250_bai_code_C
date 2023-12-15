#include <stdio.h>
#include <string.h>
#include <ctype.h>
int vowel_count( char *s);

int main()
{
    char s1[1000]; 
    printf("Enter a string: ");
    
    fgets(s1, sizeof(s1), stdin);  // input string

    int count1 = vowel_count(s1);
    printf("Number of vowels: %d\n", count1);
    
   
    return 0;
}
int vowel_count(char *s)
{
    int count = 0;
    int length = strlen(s);
    
    for (int i = 0; i < length; i++)
    {
        switch (toupper(s[i]))
        {
            case 'U' :
            case 'E' :
            case 'O' :
            case 'A' :
            case 'I' :
            count ++;
            break;
        }
        
    }
    return count;
}