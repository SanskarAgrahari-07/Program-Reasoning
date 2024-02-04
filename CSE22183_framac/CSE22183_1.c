// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 1. Maximum function with precondition and postcondition.
#include<limits.h>
/*@ 
	requires INT_MIN<=a<=INT_MAX;
	requires INT_MIN<=b<=INT_MAX;
	ensures \result>=a&&\result>=b;
	ensures \result==a||\result==b;
*/
int max(int a, int b) {
	return (a>b)?a:b;
}

void main() {
	int a = max(4, 6);
	int b = max(9, 3);
	//@ assert a==6 && b==9;
}
