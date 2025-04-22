#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

// Function to check if operator is right-associative
bool isRightAssociative(char op) {
    return (op == '^');
}

// Main function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char ch : infix) {
        if (ch == ' ') continue; // Ignore spaces

        // If operand, add to postfix
        if (isalnum(ch)) {
            postfix += ch;
        }
        // If '(', push to stack
        else if (ch == '(') {
            s.push(ch);
        }
        // If ')', pop until '('
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(')
                s.pop(); // Remove '(' from stack
        }
        // If operator
        else {
            while (!s.empty() && s.top() != '(' &&
                ((precedence(ch) < precedence(s.top())) ||
                 (precedence(ch) == precedence(s.top()) && !isRightAssociative(ch)))) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    // Pop any remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Driver code
int main() {
    string expr1 = "A+B*C+D";
    string expr2 = "((A+B)-C*(D/E))+F";

    cout << "Infix: " << expr1 << "\nPostfix: " << infixToPostfix(expr1) << endl;
    cout << "\nInfix: " << expr2 << "\nPostfix: " << infixToPostfix(expr2) << endl;

    return 0;
}
