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

struct city
{
    uint beauty;
    bool capital;
    city(uint a, bool b)
    {
        beauty = a;
        capital = b;
    }
    void setcapital() { capital = true; }
};

int main() {
    ios_base::sync_with_stdio(false);

    uint64 sum, path_sum;
    uint n, k, buf;
    vector<city> c;

    cin >> n >> k;

    sum = path_sum = 0;
    for (uint i = 0; i < n; ++i)
    {
        cin >> buf;
        c.push_back(city(buf, false));
        sum += buf;
    }

    while (k--) 
    {
        cin >> buf;

        sum -= c[buf - 1].beauty;
        path_sum += c[buf - 1].beauty * sum;
        c[buf - 1].setcapital();
    }

    for (int i = 1; i < n; ++i)
    {
        if (!c[i].capital && !c[i - 1].capital)
            path_sum += c[i].beauty * c[i - 1].beauty;
    }

    if (!c[n - 1].capital && !c[0].capital)
        path_sum += c[n - 1].beauty * c[0].beauty;

    cout << path_sum;
    
    return 0;
}