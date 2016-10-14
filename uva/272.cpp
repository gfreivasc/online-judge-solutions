#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string line;
    bool got = false;

    while (getline(cin, line)) {
        for (int i = 0; line[i] != '\0'; ++i) {
            if (line[i] == '"' && !got) {
                got = true;
                line[i] = '`';
                line.insert(i, 1, '`');
            }
            else if (line[i] == '"') {
                got = false;
                line[i] = '\'';
                line.insert(i, 1, '\'');
            }
        }
        cout << line << endl;
    }
    return 0;
}