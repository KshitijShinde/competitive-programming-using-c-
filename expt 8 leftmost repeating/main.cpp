#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

// Function to find the index of the leftmost repeating character
int leftMost(string &str) {
    int count[CHAR] = {0}; // Array to count character frequencies
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++; // Count frequencies
    }
    for (int i = 0; i < str.length(); i++) {
        if (count[str[i]] > 1) // Check for the first repeating character
            return i;
    }
    return -1; // No repeating character found
}

int main() {
    string str = "BAADD";
    cout << "Index of leftmost repeating character:" << endl;
    cout << leftMost(str) << endl; // Output the result
    return 0;
}
