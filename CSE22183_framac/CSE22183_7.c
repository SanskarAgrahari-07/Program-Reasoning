// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

//7. usage of labels, here, pre, post, \at, \old, valid, valid_read, assigns, separated.
#include<limits.h>
#include<stdio.h>

/*@ 	
	requires INT_MIN<=*a+*b<=INT_MAX;
	requires \valid(a)&&\valid_read(b);
	requires \separated(a, b);
	assigns *a;	
	ensures *a==\old(*a)+*b;
	ensures *b==\old(*b);
*/

void incr_a_by_b(int* a, int const* b) {
	*a += *b;
}


void main() {
	int a = 2;
	int b = 1;
	L1:
	 incr_a_by_b(&a, &b);
	 //@assert \at(a,Here)==3&&b==1;
	 //@assert \at(a,L1)==2&&\at(b,L1)==1;
	
}
