#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/matrix.txt", "r", stdin);
        freopen("output/searching_matrix.txt", "w", stdout);
    #endif
    
    int n, m, k;
    bool flag = 0;
    cin >> n >> m >> k;

    int arr[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // searching
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (arr[i][j] == k) {
                flag = 1;
            }
        }
    }

    if (flag) {
        cout << "Key found" << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}