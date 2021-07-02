#!/usr/bin/python3
"""
    Technical interview preparation
"""


def island_perimeter(grid):
    """ that returns the perimeter of the island described in grid """
    count = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 < 0:
                    count += 1
                else:
                    if grid[i - 1][j] == 0:
                        count += 1

                if j - 1 < 0:
                    count += 1
                else:
                    if grid[i][j - 1] == 0:
                        count += 1

                if i + 1 >= len(grid):
                    count += 1
                else:
                    if grid[i + 1][j] == 0:
                        count += 1

                if j + 1 >= len(grid[i]):
                    count += 1
                else:
                    if grid[i][j + 1] == 0:
                        count += 1
    return(count)
