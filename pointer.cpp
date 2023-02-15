#include<iostream>
using namespace std;

void increment(int a) {
    a++;
}

int main () {
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    
    int a=2;


    for (int i=0; i<3; i++) {
        // cout << *ptr << endl;
        cout << *(arr + i) << endl;
        ptr++;
    }

    return 0;
}