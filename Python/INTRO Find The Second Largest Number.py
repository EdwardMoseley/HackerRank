#!/bin/python3

import sys


"""
https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list
Find the second largest number in a list
"""

#Pull the first integer-- we don't need it
junk = input()



def secondLargest(arg):
    dat = []
    for line in arg:
        dat.append(line)
    dat = dat[0].split(' ')
    i = 0
    while i < len(dat):
        dat[i] = int(dat[i])
        i += 1
    dat.sort()
    #Find the first integer that is not the maximum integer while decrementing
    for j in reversed(range(len(dat))):
        if dat[j] is not max(dat):
            return dat[j]

print(secondLargest(sys.stdin))