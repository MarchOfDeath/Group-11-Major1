#include "major1.h"
void powerOfTwo(int n)
{
int flag;
flag=(n && (!(n&(n-1))));
if(flag==1)
{
printf("%d is a power of 2\n",n);
}
else
{
int next = pow(2, ceil(log(n)/log(2)));
printf("%d is not a power of 2\n",n);
printf("Next higher integer that is power of 2 is %d\n",next);
}
}
