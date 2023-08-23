#!/usr/bin/python3
""" Created by Mugisha Prosper"""


def island_perimeter(grid):
    """Function to calculate the perimeter"""
    p = 0
    for i in range(1, len(grid)):
        for j in range(1, len(grid[0])):
            if grid[i][j] == 1:
                p += 4
            if i > 0 and grid[i - 1][j] == 1:
                p += -1
            if j > 0 and grid[i][j - 1] == 1:
                p += -1
                
    return p
