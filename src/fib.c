/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    /*pre-condition*/
    assert (n >= 0); 

    /*post-condition*/
    if (n == 0) //base case
     return p; //return p's value when n is 0
    else if (n == 1)
     return pp; //return pp's value when n is 1
    else  //nductive step
     return fib ((n-1), pp, p+pp); //return fib's value so ((n=n-1), p=pp, pp=p+pp)

}
