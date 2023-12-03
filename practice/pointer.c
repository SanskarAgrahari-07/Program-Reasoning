#include<stdio.h>
#include<limits.h>
/*@
	requires \valid(a) && \valid(b);
	assigns *a, *b;
	ensures *a == \old(*b) && *b == \old(*a);
*/
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 2, b = 5;
	swap(&a, &b);
}
