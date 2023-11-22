#!/usr/bin/python3
"""
    This module Calculates the perimeter
    of the island described in the grid.
"""


def island_perimeter(grid):
    """
        Parameters:
            - grid (List[List[int]]): A list of lists
            of integers representing the grid.
            0 represents a water zone
            1 represents a land zone

        Returns:
            - int: The perimeter of the island.

        Constraints:
            - Grid cells are connected
            horizontally/vertically (not diagonally).
            - Grid is rectangular, width and height
            don’t exceed 100.
            - Grid is completely surrounded by water,
            and there is one island (or nothing).
            - The island doesn’t have “lakes”
            (water inside that isn’t connected to
            the water around the island).
    """

    if not grid or not grid[0]:
        # Empty grid, return perimeter as 0
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Land cell found, check its neighbors

                perimeter += 4
# Initialize with maximum perimeter for land cell

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
# Reduce by 2 since adjacent sides are shared

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
# Reduce by 2 since adjacent sides are shared

    return perimeter
