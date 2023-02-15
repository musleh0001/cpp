#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main () {
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    
    int a=2, b=4;


    for (int i=0; i<3; i++) {
        // cout << *ptr << endl;
        cout << *(arr + i) << endl;
        ptr++;
    }

    cout << a << " "  << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}