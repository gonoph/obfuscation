// vim: ts=2 sw=2 expandtab

#include <stdio.h>

#define i int
#define r return
#define m main
#define v void
#define p printf
i aa(i a,i b){r b?aa(a^b,(a&b)<<1):a;}i m(v){i a=51,b=49;p("a=%d, b=%d, result=%d\n",a,b,aa(a,b));}
