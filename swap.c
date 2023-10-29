#include<stdio.h>
#include<limits.h>
/*@
	requires INT_MIN < *a < INT_MAX;
	requires INT_MIN < *b < INT_MAX;
	ensures *a == \old(*b);
	ensures *b == \old(*a);
*/
void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a=3, b=4;
	swap(&a,&b);
	return 0;
}
