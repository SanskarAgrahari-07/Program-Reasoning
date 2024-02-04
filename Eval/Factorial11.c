#include<limits.h>
/*@
    logic integer factorial(integer n) = (n >= 1) ? n * factorial(n-1) : 1;
*/
/*@
    requires n >= 0;
    ensures (n <= 1) ==> \result == 1 || (n > 1) ==> \result == n * factorial(n-1);
    ensures \result == factorial(n);
*/
int facto(int n) {
    if(n <= 1)
        return 1;
    else 
    {
        return n*facto(n-1);
    }
}
void main() {
    int d = facto(5);
    //@ assert d == 120;
}
