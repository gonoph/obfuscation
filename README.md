# obfuscation
Collection of obfuscated programs for fun

To run all the programs:
```
make test
```

## Triangle

This uses a recursive function to print out a triangle of asterisks.

It obfuscates in several ways:

 1. The output using an integer to store the 2 characters to print: * and ' '
 2. It uses macros to condense the output.
 3. It uses a recursive function instead of a loop.

to make:

```bash
gcc -o triangle triangle.c
```

Output:

```bash
$ ./triangle
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
```

## Steps

This converts a large integer into python code and runs it to produce steps.

The python function is:

```python
def p(i):
    print('*' * i); return 0 if i>4 else p(i+1);
```

The integer and length were obtained by:

```python
with open('pfunc.py', 'rb') as f:
  a=f.read()

b=int.from_bytes(a, byteorder='big')
print(f'length: {len(a)}')
print(f'number: {hex(b)}')
```

Output:
```bash
$ sh steps.sh
*
**
***
****
*****
```

## Xmark

Output:
```
##########
##      ##
# #    # #
#  #  #  #
#   ##   #
#  #  #  #
# #    # #
##      ##
##########
```

Two implementations.

### Missy Class

This uses the fact that the ouput is a mirror image and flip of just a quarter.

1. creates a quarter of the output using recursion
2. flips it by appending; aka mirror horizontally
3. reverses the rows and appends; aka mirror vertically

### Bitmap

This uses a bitmap of the entire image, and just converts bits to characters.

1. stores the bitmap as a hex number
2. converts the hexnumber to bytes
3. passes each byte to a function that converts the byte to a binary string.
4. replaces 0 with ' ', and 1 with '#'
5. prints the resultant string sandwiched between '#' and '#'

## Bitwise Add

This adds two numbers using only bitwise operators, using recursion to shift
the carry bits.

Output:
```
a=51, b=49, result=100
```

Two implementations.

### C code

Obfuscated with macros, reduced spaces, and all in one line.

### Python

Not exactly obfuscated, but recursion is sometimes hard to follow. The bitwise
operations are also not intuitive for some folks when talking about adding two
numbers together.
