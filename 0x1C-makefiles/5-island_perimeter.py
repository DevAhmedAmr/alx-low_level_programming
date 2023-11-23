#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in island grid"""
    perimeter: int = 0
    first_one = 0
    last_one = [0, 0]
    number_of_ones = 0
    for i in range(len(grid)):
        number_of_ones = 0
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if first_one == 0:
                    if grid[i][j] < len(grid) - 1 and grid[i][j + 1] == 1:
                        perimeter += 2
                    else:
                        perimeter += 3

                    first_one = 1
                else:
                    if grid[i][j] < len(grid[i]) - 1:
                        perimeter += 2
                number_of_ones += 1

    if number_of_ones == 1:
        return perimeter + 1

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 1, 1, 0, 0, 0],
        [0, 1, 1, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 0, 0, 0, 0],
    ]
    print(island_perimeter(grid))
