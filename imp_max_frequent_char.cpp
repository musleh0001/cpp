/*
    * Question: Max frequent char
    * input: a b c a c b a d e
    * output: frequency=3, output=3
*/

#include<iostream>
#include<string>
using namespace std;

int main () {
    string s;
    cin >> s;

    int freq[26];
    for (int i=0; i<26; i++) {
        freq[i] = 0;
    }

    for (int i=0; i<s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = INT32_MIN;

    for (int i=0; i<26; i++) {
        if (freq[i] > maxF) {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << "Char: " << ans << endl;
    cout << "Frequency: " << maxF << endl;

    return 0;
}