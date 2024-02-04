// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

// 6. Swap function using pass by reference with precondition and postcondition.
#include<limits.h>
#include<stdio.h>

/*@ 
	requires INT_MIN<=*a<=INT_MAX;
	requires INT_MIN<=*b<=INT_MAX;
	requires \valid(a)&&\valid(b);
	assigns *a,*b;
	ensures *a==\old(*b)&&*b==\old(*a);
*/

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


void main() {
	int a = 4;
	int b = 5;
	swap(&a, &b);
	//@assert a==5&&b==4;
}
