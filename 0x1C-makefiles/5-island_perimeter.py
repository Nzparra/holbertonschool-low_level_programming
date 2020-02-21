#!/usr/bin/python3
"""Calculate perimterer"""


def island_perimeter(grid):
    """perimeter"""
    per = 0
    for c in range(len(grid)):
        for d in range(len(grid[c])):
            if grid[c][d] == 1:
                if c == len(grid) - 1 or grid[c + 1][d] == 0:
                    per += 1
                if c == 0 or grid[c - 1][d] == 0:
                    per += 1
                if d == len(grid) - 1 or grid[c][d + 1] == 0:
                    per += 1
                if d == 0 or grid[c][d - 1] == 0:
                    per += 1
    return (per)
