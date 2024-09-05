#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the First term: ";
    cin >> a;

    int d;
    cout << "Enter the common difference: ";
    cin >> d;

    int n;
    cout << "Enter the total number of terms: ";
    cin >> n;

    double sum = (n / 2.0) * (2 * a + (n - 1) * d); // Using double for sum

    cout << "The sum of the arithmetic progression is: " << sum << endl;

    return 0;
}
