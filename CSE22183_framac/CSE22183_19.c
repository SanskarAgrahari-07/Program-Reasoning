// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183
// 19. Maximum and minimum element in the array.
#include<stdio.h>

/*@
	requires n>=0&&\valid_read(a+(0..n-1));
	assigns \nothing;
	ensures \forall integer k;0<=k<n==>\result>=a[k];
*/

int max(int a[], int n) {
	int max = a[0];
	int i = 0;
	/*@
		loop invariant 0<=i<=n;
		loop invariant \forall integer k;0<=k<i==>max>=a[k];
		loop assigns i,max;
		loop variant n-i;
	*/
	while(i<n) {
		if(a[i]>max) 
			max = a[i];
		i++;
	}
	return max;
}

/*@
	requires n>=0&&\valid_read(a+(0..n-1));
	assigns \nothing;
	ensures \forall integer k;0<=k<n==>\result<=a[k];
*/

int min(int a[], int n) {
	int min = a[0];
	int i = 0;
	/*@
		loop invariant 0<=i<=n;
		loop invariant \forall integer k;0<=k<i==>min<=a[k];
		loop assigns i,min;
		loop variant n-i;
	*/
	while(i<n) {
		if(a[i]<min) 
			min = a[i];
		i++;
	}
	return min;
}

void main() {
	int a[] = {2, 1, 3, 8, 4, 7};
	int max_val = max(a, 6);
	int min_val = min(a, 6);
}
