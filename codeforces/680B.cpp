// Source by Gabriel Vasconcelos
// Pay me 10$ per use or satan will curse your soul.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define endl '\n'
#define min(x, y) ((x) < (y)) ? (x) : (y)
#define max(x, y) ((x) > (y)) ? (x) : (y)
#define abs(x) ((x) < 0) ? -(x) : (x)

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

int main() {
    ios_base::sync_with_stdio(false);

    int a, n, buf, count = 0;
    stack<int> before;
    cin >> n >> a;

    a--;
    for (int i = 0; i < n; ++i)
    {
        cin >> buf;
        if (i < a) before.push(buf);
        else if (i == a) count += buf;
        else
        {
            if (before.empty()) count += buf;
            else
            {
                if (buf && buf == before.top()) count+= 2;
                before.pop();
            }
        } 
    }

    while (!before.empty())
    {
        count += before.top();
        before.pop();
    }
    
    cout << count;

    return 0;
}