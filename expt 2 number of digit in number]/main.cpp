#include <bits/stdc++.h>
using namespace std;

int countDigit(int n) {
      // Base case
    if (n == 0)
        return 1;
  
    int count = 0;
  
      // Iterate till n has digits remaining
    while (n != 0) {
      
          // Remove rightmost digit
        n = n / 10;
      
          // Increment digit count by 1
        ++count;
    }
    return count;
}

int main() {
   int  n = 58964;
    cout <<countDigit(n);
    return 0;
}