#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if the number can be expressed as the sum of two primes
bool canBeExpressedAsSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n - i)) return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << (canBeExpressedAsSumOfTwoPrimes(n) ? "True" : "False") << endl;

    return 0;
}
