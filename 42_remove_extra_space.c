#include <stdio.h>
#include <string.h>

// if s[0] or s[n]= " " --> delete " "
int main()
{
  int i,j;
  char s[100];
  printf("Input a string: ");
  scanf("%[^\n]s", s);
  // Easy Code - EzC s 
  for(i=0; i < strlen(s); i++)
  {
    if(s[i] == ' ')
    {
      for(j = i+1; s[j] == ' '; j++);
      strcpy(&s[i +1], &s[j]);
      
    }

  }
  // remove leading space and ending space
  if(s[0] == ' ')
  {
    strcpy(&s[0], &s[1]);
  }

  printf("%s", s);
  if(s[i-1] == ' ')
  {
    s[i-1] = '\0';
  }
  return 0;
}
