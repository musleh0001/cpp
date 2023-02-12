#include<iostream>
using namespace std;

void fib(int n) {
    int t1 = 0;
    int t2 = 1;
    int nextTrem;

    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextTrem = t1 + t2;
        t1 = t2;
        t2 = nextTrem;
    }
    cout << endl;

    return;
}

int main () {
    int n;
    cin >> n;

    fib(n);

    return 0;
}