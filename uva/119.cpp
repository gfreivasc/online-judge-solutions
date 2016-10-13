// Source by Gabriel Vasconcelos
// Pay me 10$ per use or satan will curse your soul.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define min(x, y) ((x) < (y)) ? (x) : (y)
#define max(x, y) ((x) > (y)) ? (x) : (y)

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

int main() {
    ios_base::sync_with_stdio(false);
    int n, total, spent, k;
    map<string, int> money;
    vector<string> names;
    string giver, buf;
    
    bool skip = false;
    
    while (cin >> n)
    {
        if (skip)
            cout << endl;
        else
            skip = true;
        
        for (int i = 0; i < n; ++i)
        {
            cin >> buf;
            names.push_back(buf);
            money[buf] = 0;
        }
        
        while (n--)
        {
            cin >> giver;
            cin >> total;
            cin >> k;
    
            if (k <= 0) continue;
    
            spent = total / k;
            money[giver] -= spent * k;
            
            while (k--)
            {
                cin >> buf;
                money[buf] += spent;
            }
        }
        
        for (auto& name : names)
        {
            cout << name << ' ' << money[name] << endl;
        }
        
        names.clear();
        money.clear();
    }
    
    return 0;
}