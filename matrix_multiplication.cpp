#include<iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input/matrix.txt", "r", stdin);
        freopen("output/multiplication.txt", "w", stdout);
    #endif
    
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int m1[n1][n2];
    int m2[n2][n3];

    // first matrix input
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n2; j++) {
            cin >> m1[i][j];
        }
    }

    // second matrix input
    for (int i=0; i<n2; i++) {
        for (int j=0; j<n3; j++) {
            cin >> m2[i][j];
        }
    }

    // init answer matrix
    int ans[n1][n3];
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n3; j++) {
            ans[i][j] = 0;
        }
    }

    // multiplication calculate
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n3; j++) {
            for (int k=0; k<n2; k++) {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // print
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n3; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}