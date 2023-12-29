#include <stdio.h>
#include <string.h>

void reverse_words(char *s);

int main() 
{
  char s[] = "This is the way.";

  printf("Original:%s\n", s);
  
  reverse_words(s);
  
  printf("After:%s\n", s);

  return 0;
}

void reverse_words(char *s)
{
    int len = strlen(s);
    char temp[100];
    int i, j = 0;
    for (i = 0; i < len; i++)
    {       // hung dep 
            // 01234567
            

        for (j = 0; i < len; i++, j++)
        {
            if (s[i] == ' ' || s[i] == '.')
            {
                break;   // save words only
            }
            temp[j] = s[i];  
        }
        while (j > 0)
        {
            j--;   // -1 because j is currently in the index at " " or "." 
            s[i-j-1] = temp[j];  
        }
    }
}
