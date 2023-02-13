#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/matrix.txt", "r", stdin);
        freopen("output/spiral_order.txt", "w", stdout);
    #endif
    
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // spiral order print
    int row_start = 0, row_end = n-1;
    int col_start = 0, col_end = m-1;
    while (row_start <= row_end && col_start <= col_end) {
        // for starting row
        for (int col=col_start; col<=col_end; col++) {
            cout << arr[row_start][col] << " ";
        }
        cout << endl;
        row_start++;

        // for column end
        for (int row=row_start; row<=row_end; row++) {
            cout << arr[row][col_end] << " ";
        }
        cout << endl;
        col_end--;

        // row end
        for (int col=col_end; col>=col_start; col--) {
            cout << arr[row_end][col] << " ";
        }
        cout << endl;
        row_end--;

        // column start
        for (int row=row_end; row>=row_start; row--) {
            cout << arr[row][col_start] << " ";
        }
        cout << endl;
        col_start++;
    }

    return 0;
}