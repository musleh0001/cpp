#include<iostream>
using namespace std;

int main() {
    int a;
    short int si;
    long int li;
    unsigned int ui;
    float b;
    double c;
    char d;
    bool e;

    cout << "size of int " << sizeof(a) << " bytes" << endl;
    cout << "size of short int " << sizeof(si) << " bytes" << endl;
    cout << "size of long int " << sizeof(li) << " bytes" << endl;
    cout << "size of unsigned int " << sizeof(ui) << " bytes" << endl;
    cout << "size of float " << sizeof(b) << " bytes" << endl;
    cout << "size of double " << sizeof(c) << " bytes" << endl;
    cout << "size of char " << sizeof(d) << " bytes" << endl;
    cout << "size of bool " << sizeof(e) << " bytes" << endl;

    return 0;
}