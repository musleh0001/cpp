#include<iostream>
#include<string>
using namespace std;

int main () {
    string s1 = "abc";
    string s2 = "abc";

    if (!s1.empty() && !s2.empty() && !s1.compare(s2)) {
        cout << "Same" << endl;
    } else {
        cout << "not same" << endl;
    }

    return 0;
}