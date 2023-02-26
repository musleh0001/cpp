/*
    * Problem: convert string to upper or lower 
    * input: BacDeF
    * output: bacdef or BACDEF
*/

#include<iostream>
#include<string>
using namespace std;

int main () {
    string str = "askldfaklif";

    // convert into upper case
    for (int i=0; i<str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // convert into lower case
    for (int i=0; i<str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    cout << str << endl;

    return 0;
}