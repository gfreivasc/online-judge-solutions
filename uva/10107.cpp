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

    vector<int> v;
    int x, med, sz = 0;

    while (cin >> x)
    {
        v.push_back(x);

        nth_element(v.begin(), v.begin() + sz / 2, v.end());
        med = v[sz/2];

        sz++;

        if ((sz % 2) == 0)
        {
            nth_element(v.begin(), v.begin() + sz / 2, v.end());
            med += v[sz/2];
            med /= 2;
        }

        cout << med << endl;
    }
    
    return 0;
}