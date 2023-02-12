// find even or odd number

#include<iostream>
using namespace std;

int main() {
    int a;

    // handle user input
    cin >> a;

    if (a % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}