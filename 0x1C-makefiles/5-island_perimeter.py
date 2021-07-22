#!/usr/bin/python3
"""perimeter of a island"""


def island_perimeter(grid):
    """
    function def island_perimeter(grid):
    """
    perimeter = 0
    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                k, m = r, r
                h, l = c, c
                if r == 0:
                    k = 1
                    perimeter += 1
                if c == 0:
                    h = 1
                    perimeter += 1
                if c == len(grid[r]) - 1:
                    l = c - 1
                    perimeter += 1
                if r == len(grid) - 1:
                    m = r - 1
                    perimeter += 1
                if grid[k - 1][c] == 0:
                    perimeter += 1
                if grid[r][h - 1] == 0:
                    perimeter += 1
                if grid[r][l + 1] == 0:
                    perimeter += 1
                if grid[m + 1][c] == 0:
                    perimeter += 1
    return perimeter
