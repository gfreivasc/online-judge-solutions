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

    int h, u, d, f, day;
    float speed, up;

    while (true)
    {
        cin >> h >> u >> d >> f;
        if (!h) break;

        up = 0;
        day = 1;
        speed = u;

        while (true)
        {
            up += max(speed, 0);

            if (up > h)
            {
                cout << "success on day " << day << endl;
                break;
            }

            up -= d;
            if (up < 0)
            {
                cout << "failure on day " << day << endl;
                break;
            }

            speed -= (u / 100.f) * f;
            day++;
        }
    }
    
    return 0;
}