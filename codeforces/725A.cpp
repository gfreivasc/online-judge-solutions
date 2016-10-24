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

    int n, c = 0, r = 0;
    char buf;

    cin >> n;

    bool left = true;
    while (n--)
    {
        cin >> buf;

        if (buf == '<' && left) c++;
        else if (buf == '>' && !left) r++;
        else if (buf == '<' && !left) r = 0;
        else if (buf == '>' && left)
        {
            left = false;
            r++;
        }
    }

    cout << c + r;
    
    return 0;
}