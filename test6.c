#include<limits.h>
/*@
axiomatic abc {
logic integer xyz(integer b) = b >= 1 ? 3 * xyz(b-1) : 1;
logic integer power(integer n) = n > 1 ? (n -2) * xyz(n-2) + power(n-2): 1;
axiom alpha :
\forall integer n ; n > 1 ==> (n -2) * xyz(n-2) + power(n-2);
axiom beta :
\forall integer n ; n <= 1 ==> 1 ;
}
*/
/*@
requires r >= 1;
requires r < 100;
assigns \nothing;
ensures \result == xyz(r);
*/

int powerr(int r){
int ans = 1;
/*@
loop invariant 1 <= i <= r+1;
loop invariant ans == xyz(i-1);
loop assigns i , ans;
loop variant r - i ;
*/
for(int i = 1; i <= r; i++){
ans = ans * 3;
}
return ans;
}

/*@
requires n > 0 ;
requires n < 20;
assigns \nothing;
ensures \result == power(2 * n -1);
*/

int sumi ( int n ) {
int sum = 1 ;
 /*@
 loop invariant 1 <= i <= n + 2;
 loop invariant sum == power(i);
 loop assigns sum , i ;
 loop variant n - i;
 */
 
for (int i = 1 ; i <= n ; i += 2 ) {
sum = sum + i*powerr(i);
}
return sum;
}


int main(){
int s = 2 ;
//@assert s == 2;
int r = sumi(s) ;
//@assert r == 4;
}