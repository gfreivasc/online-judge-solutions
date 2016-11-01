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

    uint64 sz, dir, mid;
    int64 dx, dy, p;
    
    while (true)
    {
        cin >> sz >> p;
        if (sz == 0 && p == 0) break;
        dir = 0;
        mid = (sz / 2) + 1;
        dx = dy = 0;

        p--;
        while (p > 0)
        {
            if (dir == 0)
            {
                p -= dx + 1 - dy;
                dy = dx + 1;
            }
            else if (dir == 1)
            {
                p -= dy + dx;
                dx = -dy;
            }
            else if (dir == 2)
            {
                p -= dy - dx;
                dy = dx;
            }
            else
            {
                p += dy + dx;
                dx = -dy;
            }

            if (p > 0) dir = (dir + 1) % 4;
        }

        dy = dy + mid;
        dx = dx + mid;

        if (dir % 2 == 0) dy -= dir ? p : -p;
        else dx -= (dir > 1) ? -p : p;

        cout << "Line = " << dy << ", column = " << dx << ".\n";
    }

    return 0;
}