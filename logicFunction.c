#include<limits.h>
/*@
	logic integer chk(integer n) = 3 * n +4;
*/
/*@
	requires n > INT_MIN;
	ensures \result == chk(n);
*/
int check(int n) {
	return 3 * n + 4;
}
void main(){
	int d = check(2);
	//@ assert d == 10;
}
