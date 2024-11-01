#!/usr/bin/python3
# vim: ts=2 sw=2 expandtab

def add(a, b):
  return add( a ^ b, (a & b) << 1) if b else a

a=51
b=49

print(f'a={a}, b={b}, result={add(a,b)}')
