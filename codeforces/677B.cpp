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

    int64 n, h, k, buf, y = 0, time = 0;

    cin >> n >> h >> k;

    while (n--)
    {
        cin >> buf;

        if (buf + y > h)
        {
            time++;
            y = buf;
        }
        else y += buf;

        time += y / k;
        y = y % k;
    }

    if (y) time++;

    cout << time;
    
    return 0;
}