#!/bin/python

import sys

def birthdayCakeCandles(n, ar):
    arr=[]
    arr=sorted(ar)
    m=max(arr)
    c=arr.count(m)
    return c

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = birthdayCakeCandles(n, ar)
print(result)

