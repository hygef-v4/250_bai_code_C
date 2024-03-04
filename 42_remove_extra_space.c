#include <stdio.h>
#include <string.h>
//       Easy     Code - EzC  sdsd
// if s[0] or s[n]= " " --> delete " "
int main()
{
  int i,j;
  char s[100];
  printf("Input a string: ");
  scanf("%[^\n]s", s);

  for(i=0; i < strlen(s); i++)
  {
    if(s[i] == ' ')
    {
      for(j = i+1; s[j] == ' '; j++);
      strcpy(&s[i +1], &s[j]);
      
    }

  }
  printf("%s", s);

  return 0;
}
