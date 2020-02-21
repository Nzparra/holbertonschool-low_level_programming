#!/usr/bin/python3
"""Calculate perimterer"""


def islnad_perimeter(grid):
    """perimeter"""
    width = len(grid[0]) - 1
    height = len(grid) - 1
    if width == 0 or height == 0:
        return 0
    per = 0
    for c in range(width + 1):
        for d in range(height + 1):
            if c == width or grid[d][c + 1] == 0:
                per += 1
            if c == 0 or grid[d][c - 1] == 0:
                per += 1
            if d == height or grid[d + 1][c] == 0:
                per += 1
            if d == 0 or grid[d - 1][c] == 0:
                per += 1
    return (per)
