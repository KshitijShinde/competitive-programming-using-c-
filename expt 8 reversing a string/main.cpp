#include <bits/stdc++.h>
using namespace std;

// Function to reverse a portion of the string
void reverse(string &s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

// Function to reverse the order of words in the string
void reverseWords(string &s) {
    int n = s.length();
    int start = 0;

    // Step 1: Reverse each word in the string
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            reverse(s, start, i - 1); // Reverse the current word
            start = i + 1; // Move to the next word
        }
    }
    // Reverse the last word
    reverse(s, start, n - 1);

    // Step 2: Reverse the entire string
    reverse(s, 0, n - 1);
}

int main() {
    string s = "Welcome to MIT";
    reverseWords(s);
    cout << "Reversed string: " << s << endl;
    return 0;
}
