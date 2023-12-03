#include<stdio.h>
#include<limits.h>
/*@
	requires val > INT_MIN;
	assigns \nothing;
	ensures \result == 1 || \result == 0;
	ensures (((val % 3 == 0) && (val % 5 == 0)) ==> \result == 1) && (((val % 3 != 0) && (val % 5 != 0)) ==> \result == 0);
*/
int check(int val) {
	if((val%3==0) && (val%5==0))
	return 1;
	else 
	return 0;
}
int main() {
	int d = check(15);
	return 0;
}
