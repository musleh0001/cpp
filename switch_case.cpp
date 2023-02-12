#include<iostream>
using namespace std;

int main () {
    char button;

    cout << "Input a character: ";
    cin >> button;

    switch (button) {
        case 'a':
            cout << "Hello" << endl;
            break;
        case 'b':
            cout << "Bye" << endl;
            break;
        case 'c':
            cout << "Hi" << endl;
            break;
        default:
            cout << "Please enter valid character" << endl;
            break;
    }

    return 0;
}