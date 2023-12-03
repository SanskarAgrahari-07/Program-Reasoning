#ifndef _even
#define _even

#include<limits.h>
/*@
	requires val > INT_MIN;
	ensures \result == 1 || \result == 0;
	ensures ((val % 2 == 0) ==> \result == 1) && ((val % 2 != 0) ==> \result == 0);
*/
int even(int val);
#endif
