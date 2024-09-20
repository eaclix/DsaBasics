#include<bits/stdc++.h>
using namespace std;

char maxOccurringChar(string str) {
   char ans = str[0];
   int curr_freq = 1, max_freq = 1, n = str.length();
   
   for (int i = 1; i < n; i++) {
      if (str[i] == str[i - 1]) {
         curr_freq++;
      } else {
         if (max_freq < curr_freq) {
            max_freq = curr_freq;
            ans = str[i - 1];
         }
         curr_freq = 1;  
      }
   }
   
   if (max_freq < curr_freq) {  
      max_freq = curr_freq;
      ans = str[n - 1];
   }
   
   return ans;
}

int main() {
   string str = "takeuforward";
   
   sort(str.begin(), str.end());
   cout <<  "Maximum Occurring Character is " << maxOccurringChar(str);
}
