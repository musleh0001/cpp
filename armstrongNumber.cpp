#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int n, sum;
    cin >> n;

    int original = n;
    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n /= 10;
    }

    if (sum == original) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not Armstrong number" << endl;
    }


    return 0;
}