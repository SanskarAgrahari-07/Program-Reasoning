#include <stdio.h>
#include <limits.h>

/*@
    requires n >= 0;
    ensures \result * \result <= n < (\result + 1) * (\result + 1);
*/
int integer_sqrt(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int result = 1;

    /*@
        loop invariant 1 <= result <= n;
        loop assigns result;
        loop variant n - result * result;
    */
    while (result * result <= n) {
        result++;
    }

    return result - 1;
}

int main() {
    int num = 16;
    int result = integer_sqrt(num);
    //@ assert result == 4;

    return 0;
}
