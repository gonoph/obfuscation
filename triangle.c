// vim: sw=4 ts=4 cindent expandtab
#include<stdio.h>

/*
 * This uses a recursive function to print out a triangle of asterisks.
 * It obfuscates in several ways:
 * 1. The output using an integer to store the 2 characters to print: * and ' '
 * 2. It uses macros to condense the output.
 * 3. It uses a recursive function instead of a loop.
 *
 * to make: gcc -o triangle triangle.c
 */

// I - extract a char from the const int
// I: if x is even, then extract highest 8bits as a char
// I: if x is odd, then return lowest 8bits as a char
#define I(x) (char)(x%2?(c&0xff00)>>8:c)

// pc: putchar() macro
#define pc(x) putchar(x)

// rr - return the next row based on order
// rr: if order is true (not zero), then increment row
// rr: if order is false (zero), then decrement row
#define rr(o,r) (o?r+1:r-1)

// integer of chars '* ' - but in little endian format
const int c = (int) 0x202a;

// recursive function to print out rows and columns
// r: rows
// i: columns
// o: order: 1 ascending, 0 descending
int p(int r, int i, int o)
{
    // print *
    pc(I(0));

    // if last column, print newline
    // if NOT last column, print ' '
    if (!i)
    {
        pc('\n');
    } else {
        pc(I(1));
    }

    // return if rows >3 (5th row) and column is 0
    // ">3" - meaning 4 or more, counting from 0 - that's the 5th row
    // OR return if rows+columns+order are all 0
    // otherwise...
    // call p() again
    // if column is not 0, then call with same row, move next column (count down)
    // if column is 0, then inc/dec row, set column to same new row value
    // always call with same order
    return(r >3 && !i || !(r+i+o) ? 
        0 :
        p(
                i ?  r   : rr(o,r),
                i ?  i-1 : rr(o,r),
                o)
        );
}

int main(void)
{
    // recursively call ascending order rows
    // then recursively call descending order rows (1 less, will print 4 rows)
    return p(0,0,1) + p(3,3,0);
}
