#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pyramid.txt", "r", stdin);
        freopen("output/half_pyramid_number.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }

    return 0;
}