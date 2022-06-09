#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be checked
 *
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int x)
{
  if (x >= '0' && x <= '9')
      return (1);
  else
    return (0);

}
