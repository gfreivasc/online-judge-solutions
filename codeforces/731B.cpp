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

    int n, buf;
    vector<int> pizzas;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> buf;
        pizzas.push_back(buf);
    }

    bool k = true;
    for (int i = 0; i < n; ++i)
    {
        pizzas[i] -= (pizzas[i] / 2) * 2;

        if (pizzas[i] != 0)
        {
            if (i == n - 1 || pizzas[i + 1] == 0)
            {
                k = false;
                break;
            }
            else pizzas[i + 1] -= 1;
        }
    }

    if (k) cout << "YES";
    else cout << "NO";
    
    return 0;
}