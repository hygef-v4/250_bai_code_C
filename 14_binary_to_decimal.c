#include <stdio.h>
#include <string.h>
#include <math.h>

int convert(char *string);

int main(void)
{
    char s1[] = "10101";
    int value1 = convert(s1);
    printf("s1 in dec: %d", value1);
    return 0;
}

int convert(char *string)
{
    int length = strlen(string);
    int total = 0; 
    int dec = pow(2,0); 
    // loop from the right to left
    for (int i = (length - 1); i >= 0; i--)
    {
        if ((string[i]) == '1')
        {
            total += dec;
        }
        dec *=2;
    }
    return total;
}
