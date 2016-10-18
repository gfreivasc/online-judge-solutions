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

    vector<int> skyline(10001, 0);
    int l, h, r, last, begin, end;
    end = 0;
    begin = 10001;

    while (cin >> l >> h >> r)
    {
        if (l < begin) begin = l;
        if (r > end) end = r;
        for (int i = l; i < r; ++i)
        {
            skyline[i] = max(skyline[i], h);
        }
    }

    last = -1;
    for (int i = begin; i < end; ++i)
    {
        if (skyline[i] != last)
        {
            last = skyline[i];
            cout << i << ' ' << last << ' ';
        }
    }
    
    cout << end << ' ' << 0 << endl;

    return 0;
}