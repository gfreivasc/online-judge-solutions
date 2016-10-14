// Source by Gabriel Vasconcelos
// Pay me 10$ per use or satan will curse your soul.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define min(x, y) ((x) < (y)) ? (x) : (y)
#define max(x, y) ((x) > (y)) ? (x) : (y)
#define abs(x) ((x) < 0) ? -(x) : (x)

typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned uint;

float minang(float a, int b)
{
    float x = a - (float)b;
    x = abs(x);
    return (x <= 180) ? x : 360.f - x;
}

int main() {
    ios_base::sync_with_stdio(false);
    int h, m;
    int degm;
    float degh;
    char buf;
    
    cout.precision(3);

    while (true)
    {
        cin >> h >> buf >> m;

        if (!h) break;

        degm = m * 360 / 60;
        degh = h * 360 / 12;
        
        degh += m * .5f;

        cout << fixed << minang(degh, degm) << endl;
    }

    return 0;
}