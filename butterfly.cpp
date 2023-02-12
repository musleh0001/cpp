#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pyramid.txt", "r", stdin);
        freopen("output/butterfly.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        for (int j = 0; j < n; j++) {
            if (j < i) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}