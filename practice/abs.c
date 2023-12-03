#include "abs.h"
#include<stdio.h>

int abs(int val) {
	if(val>=0)
	return val;
	else
	return -val;
}
int main() {
	int d = abs(-9);
}


