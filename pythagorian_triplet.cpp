/* 
 * Given: x, y, z
 * Let a = max(x, y, z) and b and c
 * a == b + c
 */

#include<iostream>
using namespace std;

bool isPythagorean(int x, int y, int z) {
    int a = max(x, max(y, z));
    int b, c;

    if (a == x) {
        b = y;
        c = z;
    } else if (a == y) {
        b = x;
        c = z;
    } else {
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c) {
        return true;
    }

    return false;
}

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pythagorean.txt", "r", stdin);
        freopen("output/pythagorean.txt", "w", stdout);
    #endif

    int x, y, z;
    cin >> x >> y >> z;

    if (isPythagorean(x, y, z)) {
        cout << "Pythagorean triplet" << endl;
    } else {
        cout << "Not a Pythagorean triplet" << endl;
    }

    return 0;
}