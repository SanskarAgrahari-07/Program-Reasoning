#include<stdio.h>
#include<limits.h>
/*@
	requires \valid(a) && \valid(b);
	requires \separated(a,b);
	assigns *a;
	ensures *a == \old(*a) + *b;
	ensures *b == \old(*b);
*/
void plus(int *a, int *b) {
	*a+=*b;
	return ;
}
int main() {
	int a = 2, b=9;
	 plus(&a, &b);
}
