#include <stdio.h>
#include <string.h>
int main(void)
{      //Input: ezcssg104   Output: ezc-ssg-104

  char string[100];
  int length;
  do
  {
    printf("Enter a string with a length be a multiple of 3: ");
    scanf("%[^\n]s",string);  
    length = strlen(string);
  } while (length %3 !=0);
  
  int i;
  int count = 0;
  for(i = 0; i < length; i++)
  {               //ezcssg104
    count++;
    printf("%c",string[i]);
    if(count %3 ==0 && count != length)
    {
      printf("-");
    }
    
  }
  return 0;
}