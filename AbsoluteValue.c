#include <stdio.h>
#include <limits.h>

/*@
   requires INT_MIN < n < INT_MAX;
   
*/

int abs(int n ){
	if(n>0)
	return n ;
	else
	return -n;
}

int main(){
	abs(-5);
}
