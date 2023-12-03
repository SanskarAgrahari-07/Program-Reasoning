#include<limits.h>
#include<stdio.h>
/*@
	axiomatic abc{
	logic integer Lpower(integer a) = ( a > 1 ) ? 3 * Lpower(a-1) : 3;
	logic integer series(integer n) = (n > 0) ? series(n-1) + (2*n-1) * Lpower(2*n-1) : 0;
	axiom abbbb:
		\forall integer a; (a > 1) ==> 3 * Lpower(a-1);
	axiom bbb:
		\forall integer a; (a <= 1) ==> 3;
}
*/
/*@
	requires a >= 0 && a <= 20;
	ensures (a > 0) ==> \result == Lpower(a) || (a <= 0) ==> \result == 1;
*/
int power(int a) {
	if(a > 0) 
		return (3 * power(a-1));
	else 
		return 1;
}
/*@
	requires n >= 0 && n <= 20;
	ensures \result == series(n);
*/
int ser(int n) {
	int sum=0;
	/*@
		loop invariant sum == series(i-1);
		loop invariant 1 <= i <= n;
		loop assigns sum, i;
		loop variant n-i;
	*/
	for(int i=1;i<=n;i+2) {
		sum = sum + (i * power(i));
	}
	return sum;
}
void main() {
	int d = ser(2);
	//@ assert d == 84;
}
