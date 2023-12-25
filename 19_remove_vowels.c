#include <stdio.h>
#include <string.h>

int main(void) 
{
    char s[] = "This is the way.";  
    // Ths s th wy.
    int curpos = 0; 
    int newpos = 0; 
    int length = strlen(s);

    // loop over each character in the string 
    for (curpos = 0; curpos < length; curpos++)
    {
        if (!(s[curpos] == 'a' || s[curpos] == 'e' ||
              s[curpos] == 'o' || s[curpos] == 'i' ||
              s[curpos] == 'u' || s[curpos] == 'A' ||
              s[curpos] == 'E' || s[curpos] == 'O' ||
              s[curpos] == 'I' || s[curpos] == 'U'))
        {       
            s[newpos] = s[curpos];
            newpos++;
        }
    }

    // Null-terminate the modified string
    s[newpos] = '\0';
  
    // output the modified string
    printf("s: %s\n", s);

    return 0;
}
