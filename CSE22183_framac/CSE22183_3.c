// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 3. Compute the absolute value without arithmetic overflow and with precondition and postcondtion.
#include<limits.h>
#include<stdio.h>
/*@ 
	requires INT_MIN<val;
	ensures \result>=0;
	ensures (val>=0==>\result==val)&&
		(val<0==>\result==-val);
*/
int abs(int val) {
	if(val<0) return -val;
	return val;
}

void main() {
	int a = -3;
	//@assert a==-3;
	int res = abs(a);	
	//@assert res==3;	
}
