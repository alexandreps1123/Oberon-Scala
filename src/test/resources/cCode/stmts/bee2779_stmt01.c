#include <stdio.h>
#include <stdbool.h>

#define SIZEOF_ARRAY(a) (sizeof(a) / sizeof(a[0]))


int answer, n, m, v;
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
    for(int index = 0; index < SIZEOF_ARRAY(a); index++, v = a[index]) {
        cnt[v] = cnt[v] + 1;
        if (cnt[v] == 1) {
            answer = answer - 1;
        }
    }
}
