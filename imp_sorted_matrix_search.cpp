#include<iostream>
using namespace std;

int main () {
    int n, m, k;
    cin >> n >> m >> k;

    int mat[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> mat[i][j];
        }
    }

    int r=0, c=m-1;
    bool flag = false;
    while (r < n && c >= 0) {
        if (mat[r][c] == k) {
            flag = true;
            break;
        } else if(mat[r][c] > k) {
            c--;
        } else {
            r++;
        }
    }

    if (flag) {
        cout << "key found" << endl;
    } else {
        cout << "key not found" << endl;
    }

    return 0;
}