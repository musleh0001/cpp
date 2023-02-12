#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n, maxNo = INT_MIN, minNo = INT_MAX;
    cin >> n;

    int array[n];
    
    for (int i = 0; i < n; i++)
        cin >> array[i];


    for (int i = 0; i < n; i++) {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }

    cout << "Max: " << maxNo << endl;
    cout << "Min: " << minNo << endl;

    return 0;
}