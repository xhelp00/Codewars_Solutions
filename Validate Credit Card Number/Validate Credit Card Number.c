#include <stdbool.h>

bool validate(long digits) {

    //controling user input to be a number, not 0
    long temp = 0;
    int len = 2;
    int sum = 0;
    int digit = 0;
    int i = 1;
    
    temp = digits;
//counter of digits
    while (temp > 100)
    {
        temp /= 10;
        len++;
    }
//checking, invalid when not 13 or 15 or 16 digits long
//printf("%i\n", len);
//if (len != 13 && len != 15 && len != 16)
//printf("INVALID\n");
//printf("%ld", number);

//Luhn part
    while (i <= len)
    {
        digit = digits % 10;
        if (i % 2 == 0)
        {
            if (digit * 2 > 9)
            {
                sum += (digit * 2) - 9;
            }
            else
            {
                sum += digit * 2;
            }
        }
        else
        {
            sum += digit;
        }
//printf("pred%ld\n", number);
        digits /= 10;
//printf("po%ld\n", number);
        i++;
    }
    bool valid = (sum % 10 == 0) ? true : false;

  return valid;
}