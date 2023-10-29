#include<stdio.h>
#include<limits.h>
/*@
	requires \valid(a) && \valid(b);
	requires \separated(a, b);
	ensures *a == \old(*a) + *b;
	ensures *b == \old(*b); 
	assigns *a;
*/
void inc(int *a, int *b)
{
	*a = *a + *b;
}
int main() {
	int a = 9;
	int b = 10;
	inc(&a, &b);
}
