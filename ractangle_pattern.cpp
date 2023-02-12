#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/ract_in.txt", "r", stdin);
        freopen("output/ract_out.txt", "w", stdout);
    #endif

    int rows, cols;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}