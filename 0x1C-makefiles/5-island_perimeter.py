#!/usr/bin/python3
"""
    Technical interview preparation
"""


def island_perimeter(grid):
    count = 0

    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                if grid[i + 1][j] == 0:
                    count += 1
                if grid[i - 1][j] == 0:
                    count += 1
                if grid[i][j + 1] == 0:
                    count += 1
                if grid[i][j - 1] == 0:
                    count += 1
    return(count)
