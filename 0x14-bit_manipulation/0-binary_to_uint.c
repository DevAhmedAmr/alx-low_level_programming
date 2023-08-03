#include "main.h"
#include <string.h>
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlen(b);
	unsigned int num = 0;

	int shift = 0, i;

	for (i = len - 1; i >= 0; i--)
	{
		int ascii;

		ascii = (((int)b[i]));

		if (ascii < 48 || ascii > 57)
			return 0;

		num += (ascii - 48) << shift;
		shift++;
	}
	return num;
}
