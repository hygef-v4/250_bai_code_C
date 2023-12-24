#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool islegit(char *code);

int main(void)
{
    char code1[] = "L8K 4B6";  // valid
    char code2[] = "L86 4B65"; // too long
    char code3[] = "L864B6";   // missing space
    char code4[] = "L8G 4BG";  // last char is not a digit

    if (islegit(code1)) printf("%s is a postal code\n", code1);
    else printf("%s is not a postal code\n", code1);

    if (islegit(code2)) printf("%s is a postal code\n", code2);
    else printf("%s is not a postal code\n", code2);

    if (islegit(code3)) printf("%s is a postal code\n", code3);
    else printf("%s is not a postal code\n", code3);

    if (islegit(code4)) printf("%s is a postal code\n", code4);
    else printf("%s is not a postal code\n", code4);

    return 0;
}

bool islegit(char *code)
{
    int length = strlen(code);
    if (length != 7) return false;
    if (!isalpha(code[0])) return false;
    if (!isdigit(code[1])) return false;
    if (!isalpha(code[2])) return false;
    if (code[3] != ' ') return false;
    if (!isdigit(code[4])) return false;
    if (!isalpha(code[5])) return false;
    if (!isdigit(code[6])) return false;

    return true;  // else return true
}
