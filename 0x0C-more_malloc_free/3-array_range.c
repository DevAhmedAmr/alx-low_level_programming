int *array_range(int min, int max)
{
	int i, arr_index;

    int *arr = malloc((max - min + 1) * sizeof(int));

    for ( i = min, arr_index = 0; i <= max; i++, arr_index++)
    {
        arr[arr_index] = i;
    }
    return arr;
}
