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
    arr_len = len(grid) - 1
    sides: int = 0
    if i > 0:
        if grid[i - 1][j] == 0:
            sides += 1
    else:
        if grid[i][j] == 1:
            sides += 1

    if i < arr_len:
        if grid[i + 1][j] == 0:
            sides += 1
    else:
        if grid[i][j] == 1:
            sides += 1

    if j < len(grid[i]) - 1:
        if grid[i][j + 1] == 0:
            sides += 1
    elif j == len(grid[i]) - 1:
        if grid[i][j] == 1:
            sides += 1

    if j != 0:
        if grid[i][j - 1] == 0:
            sides += 1
    else:
        if grid[i][j] == 1:
            sides += 1

    return sides


if __name__ == "__main__":
    # Test case 1: Basic grid with a single island
    grid_1 = [[0, 1, 0, 0], [1, 1, 1, 0], [0, 1, 0, 0], [1, 1, 0, 0]]
    # Expected perimeter: 16
    # Explanation: The island has a perimeter of 16 based on its shape and surroundings.

    # Test case 2: Grid with multiple islands
    grid_2 = [[1, 1, 0, 0], [1, 1, 1, 0], [0, 0, 1, 0], [0, 1, 1, 0]]
    # Expected perimeter: 18
    # Explanation: There are two islands. The total perimeter is the sum of the perimeters of both islands.

    # Test case 3: Grid with no island
    grid_3 = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    # Expected perimeter: 0
    # Explanation: There are no islands, so the perimeter should be zero.

    # Test case 4: Grid with a single cell island
    grid_4 = [[1]]
    # Expected perimeter: 4
    # Explanation: There is only one cell representing an island, so its perimeter is 4.

    # Test case 5: Grid with disconnected islands
    grid_5 = [[1, 0, 0, 1], [0, 1, 1, 0], [0, 1, 1, 0], [1, 0, 0, 1]]
    # Expected perimeter: 24
    # Explanation: There are two disconnected islands. The total perimeter is the sum of the perimeters of both islands.

    # Testing the function with the test cases
    print(island_perimeter(grid_1))  # Output should be 16
    print(island_perimeter(grid_2))  # Output should be 18
    print(island_perimeter(grid_3))  # Output should be 0
    print(island_perimeter(grid_4))  # Output should be 4
    print(island_perimeter(grid_5))  # Output should be 24
