// Source by Gabriel Vasconcelos
// Pay me 10$ per use or satan will curse your soul.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;
#define endl '\n'
#define min(x, y) ((x) < (y)) ? (x) : (y)
#define max(x, y) ((x) > (y)) ? (x) : (y)
#define abs(x) ((x) < 0) ? -(x) : (x)

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

int main() {
    ios_base::sync_with_stdio(false);

    uint64 b, d, s, c, missed = 0;

    cin >> b >> d >> s;

    c = max(b, d);
    c = max(c, s);
    if (c) c -= 1;

    if (c > b) missed += c - b;
    if (c > d) missed += c - d;
    if (c > s) missed += c - s;

    cout << missed;
    
    return 0;
}