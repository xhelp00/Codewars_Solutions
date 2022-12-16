#include <stddef.h>
#include <string.h>

size_t duplicate_count(const char *text) {

    //  <----  hajime!
    int i = 0;
    int x = 0;
    char tmp;
    // create an array to store the counts of each character, first 26 positions in array are for alpha and last 10 for digits
    int char_counts[36] = {0};
  
    for (i = 0; text[i] != '\0'; i++)
      {
          //lowering the upper case
          if (text[i] >= 'A' && text[i] <= 'Z')
            {
              tmp = text[i] + 32;
              // if the character is a letter, increment the count for that character
              if (tmp >= 'a' && tmp <= 'z')
                {
                  char_counts[tmp - 'a']++;
                }
                
            }
          else if (text[i] >= 'a' && text[i] <= 'z')
            {
              char_counts[text[i] - 'a']++;
            }
          else if (text[i] >= '0' && text[i] <= '9')
            {
              char_counts[text[i] - '0' + 26]++;
            }
      }
      // sum the cases of all duplicate characters
    for (int i = 0; i < 36; i++)
      {
        if (char_counts[i] > 1)
        {
          x += 1;
        }
      }
  return x;
}