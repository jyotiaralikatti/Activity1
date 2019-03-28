#include<stdio.h>
#include<assert.h>
#include "myheader.h"

void main()
{
    int a=10,b=5;

    assert(sum(a,b)==15);
    assert(sub(a,b)==5);
    assert(mult(a,b)==50);
    assert(div(a,b)==2);
    assert(power(a,b)==100000);
    assert(a==b);

}
