#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year);

int main(void)
{
  // determine which of the years from 1900-2100 are leap years
  for (int y = 1900; y <= 2100; y++)
  {
    if (is_leap_year(y))
      printf("%d LEAP YEAR\n", y);
    else 
      printf("%d\n", y);
  }

  return 0;
}

bool is_leap_year(int year)
{
    if ((year %4 ==0 && year %100 !=0) || (year %400 ==0))
    {
    return true;
    }
  
    else 
    {
    return false;
    }

}