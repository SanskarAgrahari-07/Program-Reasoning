#include<limits.h>
#include<stdio.h>

/*@
	logic integer Lpower(integer a) = (a > 1) ? 5*Lpower(a-1) : 5;
*/
/*@
	requires a >=0 && a <= 20;
	ensures \result == Lpower(a);
*/
int power(int a) {
	if(a>1) {	
		return 5*power(a-1);
	}
	else 
		return 5;
}
/*@
	logic integer series(integer n) = (n==0) ? 0 : series(n-1)+ n * Lpower(n);
*/
/*@
	requires n >= 0 && n <= 20;
	ensures \result == series(n);
*/
int ser(int n) {
	int sum=0;
	/*@
		loop invariant sum == series(i - 1);
		loop invariant 1 <= i <= n+1;
		loop  assigns sum,i;
		loop variant n-i;
	*/
	for(int i=1;i<=n;i++) {
		sum += i * power(i);
	}
	return sum;
}
void main() {
	int d = ser(2);
	//@ assert d == 55;
}
