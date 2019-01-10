#!/bin/python3

N = int(input())

print("Weird") if N % 2 == 1 or (N % 2 == 0 and N >= 6 and N <= 20) else print("Not Weird")
