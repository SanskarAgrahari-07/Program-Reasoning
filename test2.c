#include<stdio.h>
#include<limits.h>

/*@
	requires 0 < n < (INT_MAX/2);
	ensures \result > 0;
*/
int power(int a) {

		int m=1;
		for(int i=1;i<=a;i++) {
			m = m*5;
		}
		return m;
	}

int function(int n) {
	int sum =0;
	/*@
		loop invariant 1 <= i <= n+1;
		loop assigns sum, i;
		loop variant n-i;
	*/
	for(int i=1;i<=n;i++) {
		sum+= i * power(i);
	}
	return sum;
}

void main() {
	int d = function(3);
	
	
}
