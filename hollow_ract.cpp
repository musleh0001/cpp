#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/ract_in.txt", "r", stdin);
        freopen("output/hollow_ract_out.txt", "w", stdout);
    #endif
    
    int rows, cols;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1) {
                cout << "* ";
            } else if (j == 0 || j == cols - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}