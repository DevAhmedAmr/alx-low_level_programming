#include<stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *ptrCpy;
    unsigned int i;

    if (new_size == old_size)
        return ptr;

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL)
    {
        ptrCpy = malloc(new_size * sizeof(char));

        if (ptrCpy == NULL)
            return NULL;

	free(ptr);

        return ptrCpy;
    };

    ptrCpy = malloc(new_size * sizeof(char));

    if (ptrCpy == NULL)
        return NULL;

    for (i = 0; i < old_size; i++)
        ((char *)ptrCpy)[i] = ((char *)ptr)[i];

    free(ptr);
    return ptrCpy;
}
