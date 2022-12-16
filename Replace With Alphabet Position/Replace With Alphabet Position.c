#include <stdlib.h>
#include <string.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
  int n = strlen(text);
  //printf("%i\n", n);
  char *new = malloc(n);
  int x = 0;
  int j = 0;
  for (int i = 0; i < n; i++)
    {
      x = 0;
      //if upper case  
      if (text[i] >= 'A' && text[i] <= 'Z')
        {
          if (i != 0)
            new[j++] = ' ';
          x = text[i] - 64;
          if (x > 9) 
          {
            new[j++] = x / 10 + '0';
            new[j++] = x % 10 + '0';
          } 
          else
          {
            new[j++] = x + '0';
          }
        }
      //else if lower case
      else if (text[i] >= 'a' && text[i] <= 'z')
        {
          if (i != 0)
            new[j++] = ' ';
          x = text[i] - 96;
          if (x > 9) 
          {
            new[j++] = x / 10 + '0';
            new[j++] = x % 10 + '0';
          } 
          else
          {
            new[j++] = x + '0';
          }
        }
      //else skip chars that are not letters
      else
        {
          continue;
        }
    }
  //indicate the end of string
  new[j++] = '\0';
  return new;
}