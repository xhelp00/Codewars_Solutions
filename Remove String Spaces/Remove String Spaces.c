#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in) {

    //  <----  hajime!
  int n = strlen(str_in);
  char *str = malloc(sizeof(char) * n);
  
  int i = 0;
  int j = 0;
  while (i <= n -1)
    { 
      if (str_in[i] == ' ')
        i++;
      else
        {
        str[j] = str_in[i];
        i++;
        j++;
        }
    }
  str[j] = '\0';
  return str;
}