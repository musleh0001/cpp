#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input/input.txt", "r", stdin);
        freopen("output/output.txt", "w", stdout);
    #endif

    int amount1, amount2, sum;

    // taking input
    cin >> amount1;
    cin >> amount2;

    // sum
    sum = amount1 + amount2;

    // output
    cout << "Total amount: " << sum << endl;

    return 0;
}