#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter the First term: ";
    cin >> a;

    double r;
    cout << "Enter the ratio: ";
    cin >> r;

    int n;
    cout << "Enter the total number of terms: ";
    cin >> n;

    double sum;
    if (r == 1) {
        // Special case where ratio is 1, sum is simply a * n
        sum = a * n;
    } else {
        sum = (a * (pow(r, n) - 1)) / (r - 1); // Corrected formula
    }

    cout << "The sum of the Geometic progression is: " << sum << endl;

    return 0;
}
