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

// #define endl '\n'

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

vector<vector<int>> f(vector<vector<int>> v)
{
    vector<vector<int>> h;
    vector<int> buf;
    buf.push_back((v[1][0] + v[0][1]) % 2);
    buf.push_back((v[0][0] + v[0][2] + v[1][1]) % 2);
    buf.push_back((v[1][2] + v[0][1]) % 2);

    h.push_back(buf);
    
    buf[0] = (v[0][0] + v[1][1] + v[2][0]) % 2;
    buf[1] = (v[1][0] + v[1][2] + v[0][1] + v[2][1]) % 2;
    buf[2] = (v[0][2] + v[1][1] + v[2][2]) % 2;

    h.push_back(buf);

    buf[0] = (v[1][0] + v[2][1]) % 2;
    buf[1] = (v[2][0] + v[1][1] + v[2][2]) % 2;
    buf[2] = (v[2][1] + v[1][2]) % 2;

    h.push_back(buf);

    return h;
}

bool ful_stop(vector<vector<int>> v)
{
    for (int i = 0; i < 9; ++i)
    {
        if (v[i / 3][i % 3]) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);

    int n;

    cin >> n;

    while(n--)
    {
        vector<vector<int>> g;

        for (int i = 0; i < 3; ++i)
        {
            vector<int> line;
            for (int j = 0; j < 3; ++j)
            {
                char buf;
                do
                {
                    cin >> buf;
                } while(buf < '0' || buf > '1');
                line.push_back((int)(buf - '0'));
            }

            g.push_back(line);
        }

        int k = -1;

        while (!ful_stop(g))
        {

            k++;
            g = f(g);
        }

        cout << k << endl;
        g.clear();
    }
    
    return 0;
}