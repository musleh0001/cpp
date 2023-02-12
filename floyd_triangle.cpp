#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/pyramid.txt", "r", stdin);
        freopen("output/floyd_triangle.txt", "w", stdout);
    #endif
    
    int n, count = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }


    return 0;
}