#include <cstdio>
#include <cstdlib>

int main() {
    int t, n, x;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        int sum = 0;
        int mx = 0;
        int mn = 101;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &x);
            if (x < mn) mn = x;
            if (x > mx) mx = x;
        }

        printf("%d\n", (mx - mn) * 2);
    }
}