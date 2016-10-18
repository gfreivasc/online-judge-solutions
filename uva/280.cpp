// Source by Gabriel Vasconcelos
// Pay me 10$ per use or satan will curse your soul.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;
#define endl '\n'
#define min(x, y) ((x) < (y)) ? (x) : (y)
#define max(x, y) ((x) > (y)) ? (x) : (y)
#define abs(x) ((x) < 0) ? -(x) : (x)

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

int init(set<int>& s, int n)
{
    s.clear();
    for (int i = 1; i <= n; ++i)
        s.insert(i);
}

int main() {
    ios_base::sync_with_stdio(false);

    int n, k, root, target;
    set<int> c;
    queue<int> frontier;

    while (cin >> n)
    {
        if (n == 0) break;
        vector<vector<int>> a(n + 1);

        while (cin >> root)
        {
            if (root == 0) break;
            while (cin >> target)
            {
                if (target == 0) break;
                a[root].push_back(target);
            }
        }

        cin >> k;
        while (k--)
        {
            init(c, n);
            while (!frontier.empty()) frontier.pop();
            cin >> root;
            while (true)
            {
                for (auto& e : a[root])
                {
                    if (c.find(e) != c.end())
                        frontier.push(e);
                }

                if (frontier.empty() || c.empty())
                    break;

                root = frontier.front();
                frontier.pop();
                c.erase(root);
            }
            cout << c.size();
            for (auto& e : c)
            {
                cout << ' ' << e;
            }
            cout << endl;
        }
    }
    
    return 0;
}