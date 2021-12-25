#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#


def timeConversion(s):
    # Write your code here
    if "PM" in s:
        s = s[:-2]
        x = int(s[:2])
        if x < 12:
            x = x + 12
        s = s.replace(s[:2], str(x))

    elif "AM" in s:
        s = s[:-2]
        x = s[:2]
        if x == "12":
            x = "00"
        s = s.replace(s[:2], str(x))
    print(s)


if __name__ == '__main__':

    s = input()

    result = timeConversion(s)
