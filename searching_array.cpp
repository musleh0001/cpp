#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) 
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) 
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else 
            left = mid + 1;
    }

    return -1;
}

int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;

    return 0;
}