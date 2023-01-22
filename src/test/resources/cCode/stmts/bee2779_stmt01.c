#include <stdio.h>
#include <stdbool.h>

#define foreach(item, array) \
    for(int keep = 1, \
    count = 0,\
    size = sizeof (array) / sizeof *(array); \
    keep && count != size; \
    keep = !keep, count++) \
    for(item = (array) + count; keep; keep = !keep)


int answer, n, m;
int a[3];
int cnt[11];


int main() {
    a[0] = 5;
    a[1] = 8;
    a[2] = 3;
    cnt[0] = 0;
    cnt[1] = 0;
    cnt[2] = 0;
    cnt[3] = 0;
    cnt[4] = 0;
    cnt[5] = 0;
    cnt[6] = 0;
    cnt[7] = 0;
    cnt[8] = 0;
    cnt[9] = 0;
    n = 10;
    m = 3;
    answer = n;
    foreach(int *v, a) {
        cnt[*v] = cnt[*v] + 1;
        if (cnt[*v] == 1) {
            answer = answer - 1;
        }
    }
}
