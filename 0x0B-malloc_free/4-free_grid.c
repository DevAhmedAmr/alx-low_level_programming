#include"main.h"
#include"stdlib.h"
/**
 * free_grid- function that we use to free memory from unwanted 2d arry values
 * paramters:
 * @grid: the array that we want to free memory from
 * @height: the hight of the arry
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
/* a good yt vedio that explain how dynamic 2d array in memory works */
/* and how to free it*/
/*https://www.youtube.com/watch?v=ZLc_OpzND2c*/

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
