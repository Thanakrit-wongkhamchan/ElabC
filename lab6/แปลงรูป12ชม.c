#include <stdio.h>

void main() {
    int h, m;
    char t;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &h, &m, &t);

    if (t == 'a' || t == 'A') {
        if (h == 12) {
            h = 0;
        }
    } else if (t == 'p' || t == 'P') {
        if (h != 12) {
            h += 12;
        }
    }
    printf("Equivalent 24-hour time: %02d:%02d\n", h, m);
}