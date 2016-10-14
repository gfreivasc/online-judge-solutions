#include <cstdio>
#include <cstdlib>
typedef long long ll;

int main() {
    ll a, b, t;

    scanf("%lld", &t);

    while(t--) {
        scanf("%lld %lld", &a, &b);

        printf((a > b) ? ">" : (a < b) ? "<" : "=");
        printf("\n");
    }
}