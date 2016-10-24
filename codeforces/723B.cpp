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

    int n, longer, count_l, count_p;
    string s;
    bool p, w;
    
    cin >> n >> s;

    longer = count_l = count_p = 0;
    p = w = false;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '_')
        {
            if (p) w = false;
            else count_l = 0;
        }
        else if (s[i] == '(')
        {
            count_l = 0;
            p = true;
        }
        else if (s[i] == ')')
        {
            p = w = false;
        }
        else
        {
            if (p)
            {
                if (!w)
                {
                    count_p++;
                    w = true;
                }
            }
            else
            {
                count_l++;
                if (count_l > longer) longer = count_l;
            }
        }
    }

    cout << longer << ' ' << count_p;

    return 0;
}