#include<stdio.h>
#define I(x) (char)(x%2?(c&0xff00)>>8:c)
#define R (char)((c&0xff0000)>>16)
#define pc(x) putchar(x)
#define rr(o,r) (o?r+1:r-1)
const int c=(int)0x0a202a;
int p(int r,int i,int o)
{pc(I(0));if(!i)pc(R);
else pc(I(1));return(r>3
&&!i||!(r+i+o)?0:p(i?r:
rr(o,r),i?i-1:rr(o,r),o))
;}int main(void){return p
(0,0,1)+p(3,3,0);}
