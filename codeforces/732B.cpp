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

    int n, k, buf, total_add;
    vector<int> a, b;

    cin >> n >> k;

    total_add = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> buf;
        a.push_back(buf);

        if (i)
        {
            int diff = k - (buf + b[i - 1]);
            diff = max(diff, 0);
            b.push_back(buf + diff);
            total_add += diff;
        }
        else
        {
            b.push_back(buf);
        }
    }

    cout << total_add << endl;

    for (auto& e : b)
    {
        cout << e << ' ';
    }
    
    return 0;
}