#include "main.h"
/**
* _isalpha - checking for alphabetic character
* @c: checking our parameter
* Return: returns eithet 0 or 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);



}
