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

    string pattern, file;
    vector<string> files;
    int n, m, buf;
    set<int> rm;

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        cin >> file;
        files.push_back(file);
    }

    bool ok = true;
    for (int i = 0; i < m; ++i)
    {
        cin >> buf;
        rm.insert(buf - 1);

        if (i == 0) pattern = files[buf - 1];
        else
        {
            if (files[buf - 1].length() != pattern.length())
            {
                ok = false;
                break;
            }
            for (int j = 0; j < files[buf - 1].length(); ++j)
            {
                if (pattern[j] == '?') continue;
                if (files[buf - 1][j] != pattern[j])
                    pattern[j] = '?';
            }
        }
    }

    set<int>::const_iterator current(rm.begin());
    for (int i = 0; i < n; ++i)
    {
        if (current != rm.end() && i == *current)
        {
            current++;
            continue;
        }

        if (files[i].length() == pattern.length())
        {
            ok = false;
            for (int j = 0; j < pattern.length(); ++j)
            {
                if (pattern[j] == '?') continue;
                else if (pattern[j] != files[i][j])
                {
                    ok = true;
                    break;
                }
            }

            if (!ok) break;
        }
    }

    if (!ok) cout << "No";
    else cout << "Yes" << endl << pattern;

    return 0;
}