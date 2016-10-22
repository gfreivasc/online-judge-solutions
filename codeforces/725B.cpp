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

        uint64 k, s;
        char c;

        cin >> k >> c;

        s = (c > 'c') ? 'g' - c : c - 'a' + 4;
        s += ((k - 1) / 4) * 4 + ((k % 2) ? 0 : 1);
        s += (((k - 1) / 4) * 2 + ((k % 2) ? 0 : 1)) * 6;

        cout << s;
        
        return 0;
    }