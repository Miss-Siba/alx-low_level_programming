#!/usr/bin/python3
"""Island Perimeter Function"""


def island_perimeter(grid):
    """Calculates the perimeter of the island
    Args:
    - grid (list of list of integers): Represents the island grid.

    Returns:
    - perimeter (int): The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter += 1
    return size * 4 - perimeter * 2
