#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in island grid"""
    perimeter: int = 0
    first_one = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                last_one = 0
                if first_one == 0:
                    perimeter += 3
                    first_one = 1
                else:
                    if grid[i][j] < len(grid[i]) - 1:
                        perimeter += 2

    return perimeter + 1


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0],
    ]
    print(island_perimeter(grid))
