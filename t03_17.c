#include <stdio.h>

int main() {

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    if (x1 <= x4 && x3 <= x2 && y1 <= y4 && y3 <= y2) {
        int left, right, bottom, top;

        if (x1 > x3) {
            left = x1;
        } else {
            left = x3;
        }

        if (x2 < x4) {
            right = x2;
        } else {
            right = x4;
        }

        if (y1 > y3) {
            bottom = y1;
        } else {
            bottom = y3;
        }

        if (y2 < y4) {
            top = y2;
        } else {
            top = y4;
        }
        printf("%d %d %d %d\n", left, bottom, right, top);
    } else {
        printf("The squares do not intersect\n");
    }

    return 0;
}
