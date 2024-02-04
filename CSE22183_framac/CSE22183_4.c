// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 4. To check the given number is odd or even, divisible by 3 or not with precondtion and postcondition.
#include<limits.h>
#include<stdio.h>
/*@ 
	requires INT_MIN<val;
	ensures \result>=0||\result==1;
	ensures (val%2==0==>\result==1)&&
		(val%2!=0==>\result==0);
*/
int oddOrEven(int val) {
	// returns 1 if even, checks for even condition and returns 0 otherwise 
	if(val%2==0) return 1;
	return 0;
}

/*@ 
	requires INT_MIN<val;
	ensures \result>=0||\result==1;
	ensures (val%3==0==>\result==1)&&
		(val%3!=0==>\result==0);
*/
int divisibleByThree(int val) {
	// returns 1 if divisible by 3, and returns 0 otherwise 
	if(val%3==0) return 1;
	return 0;
}


void main() {
	int a = 6;
	//@assert a==6;
	int x = oddOrEven(a);
	//@assert x==1;
	int y = divisibleByThree(a);
	//@assert y==1;	
}
