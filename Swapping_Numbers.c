#include<stdio.h>
#include<limits.h>
int h =90;
/*@
	requires \valid(a) && \valid(b);
	ensures *a == \old(*b) && *b == \old(*a);
	assigns *a, *b;	
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 8;
	int b = 9;
	//@ assert h == 90;
	swap(&a, &b);
	//@ assert h == 90;
}
