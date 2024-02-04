// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183
//22. Modifying array elements in the range of locations.
#include<stdio.h>
/*@
	requires n>=0&&\valid(a+(0..n-1));
	requires l>=0&&u<=n;
	assigns a[l..u-1];
	ensures \forall integer p;l<=p<u==>a[p]==k;
	ensures \forall integer q;q<l&&q>=u==>a[q]==\old(a[q]);
*/
void modify(int a[], int n, int l, int u, int k) {
	int i = l;
	/*@
		loop invariant l<=i<=u;
		loop invariant \forall integer r;l<=r<i==>a[r]==k;
		loop assigns i,a[l..u-1];
		loop variant u-i;
	*/
	while(i<u) {
		a[i] = k;
		i++;
	}
}

void main() {	
	int a[] = {1, 2, 3, 4, 3, 2, 5, 6, 9};
	modify(a, 9, 2, 5, 8);
}
		
