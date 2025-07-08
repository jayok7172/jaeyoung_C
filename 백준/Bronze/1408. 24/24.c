#include <stdio.h>

int time_to_seconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

void seconds_to_time(int sec, int* h, int* m, int* s) {
    *h = sec / 3600;
    sec %= 3600;
    *m = sec / 60;
    *s = sec % 60;
}

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("%d:%d:%d", &h1, &m1, &s1); 
    scanf("%d:%d:%d", &h2, &m2, &s2); 

    int now = time_to_seconds(h1, m1, s1);
    int start = time_to_seconds(h2, m2, s2);

    int diff = start - now;
    if (diff <= 0) {
        diff += 24 * 3600;
    }

    int rh, rm, rs;
    seconds_to_time(diff, &rh, &rm, &rs);

    printf("%02d:%02d:%02d\n", rh, rm, rs);
    return 0;
}
