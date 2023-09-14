#include <stdio.h>

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d\n is greater than 0: is positive", i);
	else if (i == 0)
		printf("%d\n is 0: is zero", i);
	else 
		printf("%d\n less than 0: is negative", i);



}
