// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 12. Compute the factorial of a given number with precondition and postcondition.

#include<stdio.h>

/*@logic integer factorial(integer n)=(n<2)?1:n*factorial(n-1);*/
/*@
	requires n<=12;
	assigns \nothing;
	ensures \result==factorial(n);
*/

int fact(int n) {
	if(n<2) return 1;
	int f = 1;
	int i = 2;
	/*@
		loop invariant 2<=i<=n+1;
		loop invariant f==factorial(i-1);
		loop assigns f,i;
		loop variant n-i;
	*/
	while(i<=n) {
		f = f * i;
		i++;
	}
	return f;
}

void main() {
	int a = 4;
	//@assert a==4;
	int res = fact(a);
	//@assert res==24;
}
