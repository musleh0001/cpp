#include<iostream>
using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;

    sum = (n * (n + 1)) / 2;
    cout << "Sum: " << sum << endl;

    return 0;
}