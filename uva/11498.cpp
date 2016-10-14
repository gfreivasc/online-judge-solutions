#include <cstdio>
#include <cstdlib>

int main() {
    int k, n, m, x, y;

    while (scanf("%d", &k), k) {
        scanf("%d %d", &n, &m);

        while (k--) {
            scanf("%d %d", &x, &y);

            if (n != x && m != y) {
                printf((y > m) ? "N" : "S");
                printf("%c\n", (x > n) ? 'E' : 'O');
            }
            else printf("divisa\n");
        }
    }
}