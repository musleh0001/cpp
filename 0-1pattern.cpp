#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pyramid.txt", "r", stdin);
        freopen("output/0-1pattern.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}