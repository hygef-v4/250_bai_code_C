#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// strcat (s1, s2); but we need to ensure that the 
        //size of s1 must have enough space for s1 + s2
char *string_append(char *s1, char*s2);
int main(void)
{   
    char *s3;
    s3 = string_append("hello", "world");
    printf("%s", s3);
    free(s3);


    return 0;
}

char *string_append(char *s1, char*s2)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2); 
    int size = s1_length + s2_length + 1; // 1 is the \0
    // char *s = malloc(size * sizeof(char));
    char *s = calloc(size, sizeof(char)); // store character for append
    // s1: abc : 3
    //s2: xyzw : 4
    //s: abcxyzw \0
    //   0123456 7
    
    // copy s1 to s 
    for(int i = 0; i < s1_length; i++)
    {
        s[i]  =  s1[i]; 
    }
    // copy s2 to s 
    for (int i = 0; i < s2_length; i++)
    {
        s[s1_length + i] = s2[i];
    }
    s[size-1] = '\0';
    return s;
    
}