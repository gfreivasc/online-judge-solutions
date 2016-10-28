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

    int n, N;
    vector<string> big, small;
    string line;

    do
    {
        cin >> N >> n;
        if (N == 0 || n == 0) break;

        getline(cin, line);
        for (int i = 0; i < N; ++i)
        {
            getline(cin, line);
            big.push_back(line);
        }

        for (int i = 0; i < n; ++i)
        {
            getline(cin, line);
            small.push_back(line);
        }

        for (int i = 0; i < 4; ++i)
        {
            int count = 0;
            for (int j = 0; j <= N - n; ++j)
            {
                for (int k = 0; k <= N - n; ++k)
                {
                    count++;
                    bool close = false;
                    for (int l = 0; l < n; ++l)
                    {
                        for (int m = 0; m < n; ++m)
                        {
                            if (big[j + l][k + m] != small[l][m])
                            {
                                count--;
                                close = true;
                                break;
                            }
                        }

                        if (close) break;
                    }
                }
            }

            cout << (i > 0 ? " " : "") << count;

            for (int j = 0; j < n; ++j)
            {
                line = "";
                for (int k = n - 1; k >= 0; --k)
                {
                    line += small[k][j];
                }

                small.push_back(line);
            }

            for (int j = 0; j < n; ++j)
            {
                small.erase(small.begin());
            }
        }

        cout << endl;

        big.clear();
        small.clear();
    } while (N != 0 && n != 0);
    
    return 0;
}