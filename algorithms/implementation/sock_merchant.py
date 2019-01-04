#!/bin/python

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    
    socks = 0

    while len(ar) > 0:
        rm = ar[0]
        socks += ar.count(rm) // 2

        while ar.count(rm) > 0:
            ar.remove(rm)
        
    return socks




if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    ar = map(int, raw_input().rstrip().split())

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
