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
    bool imp = true;
    map<char, int> m;
    char last, reap;

    cin >> s;

    for (auto& e : s)
    {
        m[e] += 1;

        if (m[e] > 1 && e != last)
        {
            imp = false;
            reap = e;
            break;
        }

        last = e;
    }

    if (imp)
    {
        cout << "Impossible";
        return 0;
    }

    int offset = 0;
    int begin;

    for (int i = 0; i < 27; ++i)
    {
        if (!offset && s[i] == reap)
        {
            offset++;
            begin = i;
        }
        else if (offset && s[i] == reap) break;
        else if (offset) offset++;
    }

    s.erase(begin, 1);

    begin = (begin + offset / 2) % 26;

    for (int i = 0; i < 26; ++i)
    {
        if (i < 13) cout << s[(i + begin) % 26];
        else cout << s[(begin - i + 38) % 26];
        if (i == 12) cout << endl;
    }

    return 0;
}
