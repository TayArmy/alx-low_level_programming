#!/usr/bin/python3

def island_perimeter(grid):
"""
Returns the perimeter of the island described in grid.

Args:
    grid: a list of list of integers, where 0 represents a water zone and 1 represents a land zone.

Returns:
    The perimeter of the island.

Raises:
    None.
"""
perimeter = 0

for i in range(len(grid)):
    for j in range(len(grid[0])):
        if grid[i][j] == 1:
            # Check top neighbor
            if i == 0 or grid[i - 1][j] == 0:
                perimeter += 1
            # Check left neighbor
            if j == 0 or grid[i][j - 1] == 0:
                perimeter += 1
            # Check bottom neighbor
            if i == len(grid) - 1 or grid[i + 1][j] == 0:
                perimeter += 1
            # Check right neighbor
            if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                perimeter += 1

return perimeter
