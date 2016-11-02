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

    string code, last;

    while (true)
    {
        cin >> code;

        if (code == "#") break;

        last = code;
        next_permutation(code.begin(), code.end());
        if (last >= code) cout << "No Successor";
        else cout << code;
        cout << endl;
    }
    
    return 0;
}