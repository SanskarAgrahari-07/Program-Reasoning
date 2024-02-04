// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183

//11. Sum of square of natural numbers in the range.

#include<stdio.h>
#include<limits.h>

/*@
	requires -10000 <=n<= 10000;
	requires n>0;
	ensures \result==n*(n+1)*(2*n+1)/6;
*/

int sumofsquares(int n) {
	int sum = 0;
	int i = 1;
	/*@
		loop invariant 1<=i<=n+1;
		loop invariant sum==(i-1)*(i)*(2*i-1)/6;
		loop assigns sum,i;
		loop variant n-i;
	*/
	while(i<=n) {
		sum=sum+i*i;
		i=i+1;
	}	
	return sum;
}

void main() {
	int a = 3;
	//@assert a==3;
	int s = sumofsquares(a);
	//@assert s==14;
}
