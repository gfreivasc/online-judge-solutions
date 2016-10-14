#include <cstdio>
#include <cstdlib>

int main() {
    int t, k, mn, mx, e, sum;

    scanf("%d", &t);
    k = t;

    while(t--) {
        mn = 10001;
        mx = 999;
        sum = 0;
        for (int i = 0; i < 3; ++i) {
            scanf("%d", &e);
            if (e > mx) mx = e;
            if (e < mn) mn = e;
            sum += e;
        }

        printf("Case %d: %d\n", k - t, sum - mx - mn);
    }
}