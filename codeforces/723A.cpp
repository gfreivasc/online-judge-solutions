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

    int a, b, c, med;

    cin >> a >> b >> c;

    if ((a > b && a < c) || (b > a && c < a))
        med = a;
    else if ((a > b && c < b) || (a < b && c > b))
        med = b;
    else 
        med = c;


    cout << abs(a - med) + abs(b - med) + abs(c - med);
    
    return 0;
}