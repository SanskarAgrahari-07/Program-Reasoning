#include<stdio.h>
#include<limits.h>
/*@
    requires INT_MIN < n < INT_MAX;
    ensures (\result == (\old(n) + 1));
*/
int inc(int n) {
    return ++n;
}
int main(void) {
    int d = inc(2);
    //@ assert d == 3;
}