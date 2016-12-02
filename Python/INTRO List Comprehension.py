#!/bin/python3

import sys

"""
https://www.hackerrank.com/challenges/list-comprehensions

Three integers:
X
Y
Z
N

All permutations where X+Y+Z != N
"""


def listComprehension(arg):
    dat = []
    for line in arg:
        dat.append(int(line.strip()))
        #dat[0] = X
        #dat[1] = Y
        #dat[2] = Z
    n = dat.pop() # N, last integer in dat
    lib = [[dat[0],dat[1],dat[2]] for dat[0] in range(dat[0]+1) for dat[1] in range(dat[1]+1) for dat[2] in range(dat[2]+1) if sum(dat) is not n]
    return lib
    
print(listComprehension(sys.stdin))