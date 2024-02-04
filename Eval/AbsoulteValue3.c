#include <stdio.h>
#include <limits.h>

/*@
   requires INT_MIN < n < INT_MAX;
   ensures (\result == n) || (\result == -n);
   ensures ((n > 0) ==> \result == n) && ((n <= 0) ==> \result == -n);
   
*/

int abs(int n ){
	if(n>0)
	return n ;
	else
	return -n;
}

int main(){
	int d = abs(-5);
    //@ assert d == 5;
}