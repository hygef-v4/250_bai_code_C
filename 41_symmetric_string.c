#include <stdio.h>
#include <string.h>
int main(void)
{ 
  // check symmetric string 
  char string[100];
  int length;
    
  printf("Enter a string: ");
  scanf("%[^\n]s",string);  
  length = strlen(string);
  
  int i;
  
  for(i = 0; i < length/2; i++)
  {               
    if(string[i] != string[length-1-i])
    {
      printf("Not symmetric!");
      break;    
    }    // n = 3 
  }   // abccba
  if (i == length/2)
  {
    printf("Is symmetric!");
  }
    
  return 0;
}