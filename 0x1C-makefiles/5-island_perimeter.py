#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in island grid"""
    perimeter: int = 0
    first_one = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += look_up(grid, i, j)

    return perimeter


def look_up(grid, i, j):
    sides = 0

    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    if i > 0 and grid[i - 1][j] == 0:
        sides += 1
    if i < rows - 1 and grid[i + 1][j] == 0:
        sides += 1
    if j > 0 and grid[i][j - 1] == 0:
        sides += 1
    if j < cols - 1 and grid[i][j + 1] == 0:
        sides += 1

    return sides


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 1, 0, 0, 0],
    ]
    print(island_perimeter(grid))
