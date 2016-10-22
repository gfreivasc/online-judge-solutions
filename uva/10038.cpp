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

bool v[3000];

int main() {
    ios_base::sync_with_stdio(false);

    int n, buf, carry;

    while (cin >> n)
    {
        cin >> carry;
        for (int i = 1; i < n; ++i)
        {
            cin >> buf;
            v[abs(buf - carry)] = true;
            carry = buf;
        }

        bool jolly = true;
        for (int i = 1; i < n; ++i)
        {
            if (!v[i])
            {
                jolly = false;
                break;
            }
        }

        cout << (jolly ? "J" : "Not j") << "olly" << endl;
        for (int i = 0; i < 3000; i++) v[i] = false;
    }
    
    return 0;
}