#include <stdio.h>
#include <limits.h>
/*@
	logic integer Sum(integer n) = (n / (n + 1));
*/
/*@
	requires INT_MIN < n  < INT_MAX;
	ensures \result > 0;	
*/

int Sum(int n) {
	int sum = 1;
	/*@
		loop invariant 1 <= i <= n+1;
		loop invariant sum == \at(sum,LoopEntry) + i/(i+1) ;
		loop assigns sum, i;
		loop variant n-i;
	*/
	for (int i = 1; i <= n; i++) {
		sum += (i / (i + 1));
	}
	return sum;
}

  void main() {
	int d = Sum(3);
	//@assert d == Sum(3);
}


