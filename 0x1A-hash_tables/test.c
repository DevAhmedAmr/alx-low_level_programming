#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *s = "cisfun";
	char *s2 = "carefun";

	printf("*%d\n", strcasecmp(s, s2));
	return (EXIT_SUCCESS);
}