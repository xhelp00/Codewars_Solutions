#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]) {
    //  <----  hajime!
  // check if no names were provided
  if (n == 0)
  {
    // return "no one likes this"
    char* no_one = "no one likes this";
    return strdup(no_one);
  }
  // create a buffer to store the display text
  char buffer[256] = {0};
  // check if only one name was provided
  if (n == 1)
  {
    // append the name and " likes this" to the buffer
    sprintf(buffer, "%s likes this", names[0]);
  }
  // check if two names were provided
  else if (n == 2)
  {
    // append the names + "and " + " like this" to the buffer
    sprintf(buffer, "%s and %s like this", names[0], names[1]);
  }
  //check if three names were provided
  else if (n == 3)
  {
    // append the names 
    sprintf(buffer, "%s, %s and %s like this", names[0], names[1], names[2]);
  }
  // check if 4 or more names were provided
  else
  {
    // append the first three names 
    sprintf(buffer, "%s, %s and ", names[0], names[1]);
    // append the number of remaining names and " others" and " like this" to the buffer
    sprintf(buffer + strlen(buffer), "%d others like this", n - 2);
  }
    // allocate and return a copy of the buffer
  return strdup(buffer);
}