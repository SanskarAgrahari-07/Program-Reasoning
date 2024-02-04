#include<stdio.h>
#include<limits.h>
/*@
    requires n > INT_MIN;
    ensures \result == (n * (n+1)) / 2;

*/
int sum(int n) {
    int s = 0;
    /*@
        loop invariant 1 <= i <= n+1;
        loop invariant s == (i-1)*i/2;
        loop assigns s,i;
        loop variant n-i; 
    */
    for(int i=1;i<=n;i++) {
        s+=i;
    }
    return s;
}
int main() {
    int d = sum(5);
    //@ assert d == 15;
}