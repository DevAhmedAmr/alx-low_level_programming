/*
 * infinite_add - adds two numbers stored as strings
 *
 * @n1: First number string
 * @n2: Second number string
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Returns: Pointer to result, or NULL if buffer is too small
 */
char *infinite_add(const char *n1, const char *n2, char *r, int size_r) {
  /* Declare counter variables */
  int i, j, k, carry;

  /* Iterate over each character in the strings */
  for (i = strlen(n1), j = strlen(n2), k = 0; k < size_r - 1; i--, j--, k++) {
    /* Initialize carry */
    carry = 0;

    /* Add the current digits and carry */
    if (i >= 0) {
      carry += n1[i] - '0';
    }
    if (j >= 0) {
      carry += n2[j] - '0';
    }

    /* Store the result */
    r[k] = carry % 10 + '0';

    /* Update carry for next iteration */
    carry /= 10;
  }

  /* Terminate the string */
  r[k] = '\0';

  /* Check if the result fits in the buffer */
  if (i >= 0 || j >= 0 || carry) {
    return NULL;
  }

  /* Reverse the string */
  for (k -= 1, j = 0; j < k; k--, j++) {
    char temp = r[k];
    r[k] = r[j];
    r[j] = temp;
  }

  /* Return the result */
  return r;
}

