/*
    * Question: From the biggest number from the numeric string
    * input: 5 3 2 1 4
    * output: 5 4 3 2 1
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main () {
    string str;
    cin >> str;

    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;

    return 0;
}