#include <stdio.h>
#include <limits.h>

/*@
   requires INT_MIN < n < INT_MAX;
   ensures (\result == n) || (\result == -n);
   ensures ((n > 0) ==> \result == n) && ((n <= 0) ==> \result == -n);
   
*/
int swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}