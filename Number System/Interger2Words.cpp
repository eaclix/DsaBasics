#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "zero";
        return intToString(num).substr(1); // Remove the leading space
    }

private:
    vector<string> below_20 = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> below_100 = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    vector<string> thousands = {"", "thousand", "million", "billion"};

    string intToString(int n) {
        if (n == 0) return "";
        else if (n < 20) return " " + below_20[n];
        else if (n < 100) return " " + below_100[n / 10] + intToString(n % 10);
        else if (n < 1000) return " " + below_20[n / 100] + " hundred" + intToString(n % 100);
        else {
            for (int i = 0; i < thousands.size(); i++) {
                if (n < pow(1000, i + 1)) {
                    return intToString(n / (int)pow(1000, i)) + " " + thousands[i] + intToString(n % (int)pow(1000, i));
                }
            }
        }
        return "";
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    cout << solution.numberToWords(n) << endl;

    return 0;
}
