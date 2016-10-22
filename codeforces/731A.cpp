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

    string s;
    int moves = 0;
    char pos = 'a';

    cin >> s;

    for (auto& e : s)
    {
        moves += min(abs(pos - e), abs(26 - abs(pos - e)));
        pos = e;
    }

    cout << moves;
    
    return 0;
}