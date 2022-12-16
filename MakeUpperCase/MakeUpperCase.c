#include <string.h>

char *makeUpperCase (char *string)
  {
  int n = strlen(string);
  
  for (int i = 0; i < n; i++)
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] -= 32;
  return string;
  }