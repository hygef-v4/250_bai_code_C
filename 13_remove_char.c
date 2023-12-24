#include <stdio.h>
void remove_char(char *string, char r);

int main(void)
{
    char s2[] = "aaaAAAxxAAAaaaBBBCCaaaaAa";
    printf("s2 before: %s\n", s2);
    
    remove_char(s2, 'a');
    printf("s2 after: %s\n", s2);
    
    
    return 0;
}
void remove_char(char *string, char r)
{
    // hello word
    //hell wrd 
    // we gonna shift all next char to the left by 1
    int pos = 0;
    while ((string[pos]) != '\0') // outer loop to check one by one character from the string
    {
        if (string[pos] ==r ) 
        {
            //if found char all the other from the right move to the left by 1 
            int newpos = pos;
            while ((string[newpos]) != '\0' )
            {
                string[newpos] = string[newpos +1];
                newpos ++; 
            }
            
        }
        else  pos ++; // use else to ensure that the pos ++ only the character not removed
       
        
    }
}