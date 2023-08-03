#include <stdint.h>
#include "main.h"
/**
 *  get_endianness -  function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint32_t value = 0x12345678;
	uint8_t *ptr = (uint8_t *)&value;

	/* If the first byte (lowest memory address) is 0x78, it's little endian.*/
	/* If the first byte is 0x12, it's big endian.*/
	return ((*ptr == 0x78) ? (1) : (0));
}
