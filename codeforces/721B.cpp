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

int main() {
    ios_base::sync_with_stdio(false);

    vector<string> pwds;
    string correct;
    uint n, k, pwdl;
    uint low, lsame;

    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        cin >> correct;
        pwds.push_back(correct);
    }

    cin >> correct;

    pwdl = correct.length();

    low = lsame = 0;
    for (auto& pwd : pwds)
    {
        if (pwd.length() < pwdl) low++;
        else if (pwd.length() == pwdl) lsame++;
    }

    lsame += low;
    cout << low + (low / k) * 5 + 1 << ' ';
    cout << lsame + ((lsame - 1) / k) * 5;

    return 0;
}