# obfuscation
Collection of obfuscated programs for fun

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
```

The integer and length were obtained by:

```python
with open('pfunc.py', 'rb') as f:
  a=f.read()

b=int.from_bytes(a, byteorder='big')
print(f'length: {len(a)}')
print(f'number: {hex(b)}')
...

Output:
```bash
$ sh steps.sh
*
**
***
****
*****
```
