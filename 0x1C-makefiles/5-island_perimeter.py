#!/usr/bin/python3

def island_perimeter(grid):
    """
    calculate the perimeter of the island described in grid

    args:
    - grid (list[list[int]]): a list of lista representing the island grid
    returns
    - int: The perimeter of the island
    """
    perimeter = 0

    if not grid or not grid[0]:
        return perimeter
    
    rows, col = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
    
    return perimeter
