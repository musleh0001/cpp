#include<iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pascal_in.txt", "r", stdin);
        freopen("output/pascal_out.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}