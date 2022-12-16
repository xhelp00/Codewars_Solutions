#include <string.h>

char *maskify (char *masked, const char *string)
{
	int i;
  int len = strlen(string);

  // Check if the length of the string is less than 4
  if (len < 4)
  {
  // If so, simply copy the string to the masked variable
  strcpy(masked, string);
  }
  else
  {
  // Loop through the string up to the last 4 characters
  for (i = 0; i < len - 4; i++)
  {
  // Replace each character with '#'
  masked[i] = '#';
  }
  // Copy the last 4 characters of the string to the masked variable
  strcpy(masked + i, string + i);  
  }

	return masked;
}