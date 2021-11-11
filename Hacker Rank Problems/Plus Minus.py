#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#


def plusMinus(arr):
    # Write your code here
    plus = 0
    neg = 0
    zero = 0

    for i in arr:
        if i > 0:
            plus = plus + 1
        elif i < 0:
            neg = neg + 1
        else:
            zero = zero + 1

    print(plus/len(arr))
    print(neg/len(arr))
    print(zero/len(arr))


if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
