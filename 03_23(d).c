#include <stdio.h>

int main() {
    double tl = -1.0, tr = 1.0, al = 0.5, ar = 0.7;
    double x = 2.0;
    double result;

    if (x <= tl) {
        result = tl + al * (x - tl);
    } else if (x > tl && x < tr) {
        result = 0;
    } else {  // x >= tr
        result = tr + ar * (x - tr);
    }

    printf("(%f, %f, %f, %f, %f) = %f\n", tl, tr, al, ar, x, result);

    return 0;
}
