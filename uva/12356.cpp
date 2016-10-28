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

    vector<int> lf(100100), rf(100100);
    int s, b, l, r;

    s = b = 1;

    while (s != 0 && b != 0)
    {
        cin >> s >> b;

        if (s == 0 && b == 0) break;

        for (int i = 0; i <= s; ++i)
        {
            lf[i] = i - 1;
            rf[i] = i + 1;
        }

        while (b--)
        {
            cin >> l >> r; 

            rf[lf[l]] = rf[r];
            lf[rf[r]] = lf[l];
            if (lf[l]) cout << lf[l];
            else cout << '*';
            cout << ' ';
            if (rf[r] != s + 1) cout << rf[r];
            else cout << '*';
            cout << endl;
        }

        cout << '-' << endl;
    }
    
    return 0;
}