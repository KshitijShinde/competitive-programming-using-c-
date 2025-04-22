#include <bits/stdc++.h>
using namespace std;

// Function to check if brackets are balanced
bool areBracketsBalanced(string expr) {
    stack<char> s;

    for (char ch : expr) {
        // If the character is an opening bracket, push it to the stack
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }
        // If it's a closing bracket
        else {
            if (s.empty()) return false;  // Unmatched closing bracket

            char top = s.top();
            s.pop();

            // Check for matching pair
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false;
            }
        }
    }

    // If the stack is empty, all brackets were matched
    return s.empty();
}

int main() {
    string expr = "{()}[]";

    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
