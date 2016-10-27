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

    int n, k, m, v, total;
    char c;
    string line;
    map<char, int> val;
    
    cin >> n;

    while (n--)
    {
        cin >> k;
        while (k--)
        {
            cin >> c >> v;
            val[c] = v;
        }

        cin >> m;
        total = 0;

        getline(cin, line);
        while (m--)
        {
            getline(cin, line);
            for (auto& e : line)
            {
                total += val[e];
            }
        }

        cout << total / 100 << '.';
        cout << (((total % 100) < 10) ? "0" : "");
        cout << total % 100 << '$' << endl;
        val.clear();
    }

    return 0;
}