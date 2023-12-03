#include<stdio.h>
#include<limits.h>
/*@
	requires val > INT_MIN;
	assigns \nothing;
	behavior pos:
		assumes val >= 0;
		ensures \result == val;
	behavior neg:
		assumes val < 0;
		ensures \result == -val;
	complete behaviors;
	disjoint behaviors;
*/
int abs(int val) {
	if(val >= 0)
	return val;
	else
	return -val;
}
int main() {
	int d = abs(-9);
}
