#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pyramid.txt", "r", stdin);
        freopen("output/inverted_half_pyramid.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            // cout << "* ";
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}