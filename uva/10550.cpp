#include <algorithm>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    string line;
    vector<string> szNumbers;
    vector<int> iNumbers;
    const string breakCase("0 0 0 0");

    while(line.compare(breakCase)) {
        getline(cin, line);
        if (!line.compare(breakCase)) break;
        int sum = 720;

        istringstream iss(line);
        copy(istream_iterator<string>(iss), istream_iterator<string>(),
            back_inserter(szNumbers));

        for (vector<string>::iterator it = szNumbers.begin();
            it != szNumbers.end(); ++it) {
            iNumbers.push_back(stoi(*it));
        }

        sum += ((40 + iNumbers[0] - iNumbers[1]) % 40) * 360/40;
        sum += 360;
        sum += ((40 + iNumbers[2] - iNumbers[1]) % 40) * 360/40;
        sum += ((40 + iNumbers[2] - iNumbers[3]) % 40) * 360/40;

        cout << sum << endl;

        szNumbers.clear();
        iNumbers.clear();
    }
}