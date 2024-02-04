// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 5. Swap function using pass by value with precondition and postcondition.
#include<limits.h>
#include<stdio.h>

/*@ 
	requires INT_MIN<=a<=INT_MAX;
	requires INT_MIN<=b<=INT_MAX;
	ensures a==\at(a,Pre) && b==\at(b,Pre);
*/

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}


void main() {
	int a = 4;
	int b = 5;
	swap(a, b);
	//@assert a==4 && b==5;
}
