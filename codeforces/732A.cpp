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

    int k, r, i;

    cin >> k >> r;

    for (i = 1; i < 10; i++)
    {
        int price = i * k;
        if (price % 10 == 0) break;
        if (price - r < 0) continue;
        if ((price - r) % 10 == 0) break;
    }

    cout << i;
    
    return 0;
}