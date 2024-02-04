// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

//9. Sum of first n numbers using 'while' loop with precondition and postcondition.
#include<stdio.h>
#include<limits.h>

/*@
	requires INT_MIN <=n<= INT_MAX;
	requires n>0;
	ensures \result==n*(n+1)/2;
*/

int sum(int n) {
	int sum = 0;
	int i = 1;
	/*@
		loop invariant sum==(i-1)*i/2;
		loop invariant 1<=i<=n+1;
		loop assigns sum,i;
		loop variant n-i;
	*/
	while(i<=n) {
		sum=sum+i;
		i=i+1;
	}	
	return sum;
}

void main() {
	int a = 5;
	//@assert a==5;
	int s = sum(a);
	//@assert s==15;
}
