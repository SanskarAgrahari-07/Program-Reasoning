#include<stdio.h>
#include<limits.h>
int main() {
	int a = 43;
	Label_a:
		a = 75;
		//@assert a == 75 && \at(a,Label_a) == 43;
}
