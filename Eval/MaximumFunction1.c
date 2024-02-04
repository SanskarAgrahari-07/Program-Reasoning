#include<stdio.h>
#include<limits.h>
/*@
    requires INT_MIN < a < INT_MAX;
    requires INT_MIN < b < INT_MAX;
    ensures (\result == 1) || (\result == 0);
    ensures ((a > b) ==> \result == 1) && ((a < b) ==> \result == 0);
*/

int max(int a, int b) {
    if(a>b)
        return 1;
    else
        return 0;
}
int main(void) {
    int d = max(3,2);
    //@ assert d == 1;
    int e = max(2,3);
    //@ assert e == 0;
}