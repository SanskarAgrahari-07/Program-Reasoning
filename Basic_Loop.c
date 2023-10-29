#include<stdio.h>
#include<limits.h>
int add() {
	int sum =0;
	/*@
		loop invariant 0 <= i <= 3;
		loop assigns sum,i;
		loop variant 3-i;
	*/
	for(int i=0;i<3;i++)
	{
		sum+=i;
	}
	return sum;
}
int main() {
	int d = add();
	}
