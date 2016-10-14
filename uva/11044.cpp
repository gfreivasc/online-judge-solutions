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
    int a, b, t;

    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", (int)(ceil((a - 2)/3.0) * ceil((b - 2)/3.0)));
    }
}