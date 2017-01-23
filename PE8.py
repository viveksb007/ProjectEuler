#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = input().strip()
    t0 = n-k+1
    mul = 0
    for i in range(0,t0):
        temp_str = num[i:i+k]
        list_str = list(temp_str)
        temp_mul = 1
        for j in list_str:
            temp_mul *= int(j)
        if temp_mul > mul:
            mul = temp_mul
    print(mul)
