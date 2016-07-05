#!/usr/bin/python

import sys

data = sys.argv[1]

fh = open("/dev/reverse", "w+")

fh.write(data)

fh.flush()

length = len(data)

print fh.read(length)
