#include <stdio.h>
#include <string.h>

void replace_char(char *string, char replaced, char new_char);
int main(void)
{
    char s1[] = "Hello world, Im hung";
    replace_char(s1,'l','z');
    printf ("New string s1: %s", s1);
    
    return 0;
}
void replace_char(char *string, char replaced, char new_char)
{
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
     if (string[i] == replaced)
     {
        string[i] = new_char;
     }
    }
}