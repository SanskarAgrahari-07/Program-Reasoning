// Sanskar Kumar Agrahari
//BL.EN.U4CSE22183
// 13.Compute the GCD of two numbers with precondition and postcondition.

/*@
	axiomatic GCD{
		logic integer Gcd(integer p,integer q);
		axiom Gcd1:\forall integer m,n;m>n==>Gcd(m,n)==Gcd(m-n,n);
		axiom Gcd2:\forall integer m,n;n>m==>Gcd(m,n)==Gcd(m,n-m);
		axiom Gcd3:\forall integer m,n;n==m==>Gcd(m,n)==m;
	}
*/

/*@
	requires p>=1;
	requires q>=1;
	ensures \result==Gcd(\old(p),\old(q));
	assigns \nothing;
*/
int gcd(int p, int q) {
	
	/*@
		loop invariant Gcd(p,q)==Gcd(\at(p,Pre),\at(q,Pre));
		loop assigns p,q;
	*/
	while(p!=q) {
		if(p > q)
			p = p - q;
		if(q > p)
			q = q - p;
	}
	return p; 
}

void main() {
	int res = gcd(57, 78);
	//@assert res==3;
}


