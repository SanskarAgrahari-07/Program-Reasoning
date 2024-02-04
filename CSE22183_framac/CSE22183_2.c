// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 2. Increment function with precondition and postcondition.
#include<limits.h>
#include<stdio.h>
/*@ 
	requires INT_MIN<=a<=INT_MAX-1;
	ensures \result==a+1;
*/
int increment(int a) {
	return ++a;
}

void main() {
	int x = 1;
	//@assert x==1;
	int res = increment(x);
	//@assert res==2;	
}
