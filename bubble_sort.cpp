#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    // bubble sort
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for (int i=0; i<n; i++) 
        cout << arr[i] << " ";

    return 0;
}