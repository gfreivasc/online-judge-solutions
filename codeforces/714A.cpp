// Source by Gabriel Vasconcelos
// Pay me 10$ per use or satan will curse your soul.

#include <algorithm>
#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;

#define endl '\n'

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

int main() {
    ios_base::sync_with_stdio(false);

    uint64 l1, r1, l2, r2, k, beg, end;

    cin >> l1 >> r1 >> l2 >> r2 >> k;

    beg = max(l1, l2);
    end = min(r1, r2);

    if (k >= beg && k <= end) end--;

    cout << ((end >= beg) ? end - beg + 1 : 0);
    
    return 0;
}