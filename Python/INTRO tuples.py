#!/bin/python3

import sys

"""
https://www.hackerrank.com/challenges/python-tuples

hash(object)

Return the hash value of the object (if it has one). Hash values are integers. They are used to quickly compare dictionary keys during a dictionary lookup. Numeric values that compare equal have the same hash value (even if they are of different types, as is the case for 1 and 1.0).
"""

def tupler(arg):
    
    cache = []
    
    for line in arg:
        for x in line.split(' '):
            try:
                cache.append(int(x))
            except ValueError:
                pass
    
    return print(hash(tuple(cache)))

n = input()

tupler(sys.stdin)