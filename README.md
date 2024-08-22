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
