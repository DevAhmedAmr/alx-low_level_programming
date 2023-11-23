#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in the grid"""
    perimeter = 0

    if not grid or not grid[0]:  # Check for empty grid
        return perimeter

    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += look_up(grid, i, j, rows, cols)

    return perimeter


def look_up(grid, i, j, rows, cols):
    sides = 0

    if i == 0 or grid[i - 1][j] == 0:  # Top side
        sides += 1
    if i == rows - 1 or grid[i + 1][j] == 0:  # Bottom side
        sides += 1
    if j == 0 or grid[i][j - 1] == 0:  # Left side
        sides += 1
    if j == cols - 1 or grid[i][j + 1] == 0:  # Right side
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
