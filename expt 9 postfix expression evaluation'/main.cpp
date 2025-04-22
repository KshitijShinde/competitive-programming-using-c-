#include <iostream>
#include <string>
using namespace std;

class Evaluate {
    int top;
    int capacity;
    string* array;

public:
    Evaluate(int capacity) {
        top = -1;
        this->capacity = capacity;
        array = new string[capacity];
    }

    bool isEmpty() {
        return (top == -1);
    }

    string peek() {
        return array[top];
    }

    string pop() {
        if (!isEmpty()) {
            return array[top--];
        } else {
            return "$"; // Error token
        }
    }

    void push(string op) {
        array[++top] = op;
    }

    int evaluatePostfix(string exp) {
        for (int i = 0; i < exp.length(); i++) {
            if (isdigit(exp[i])) {
                // Convert char to string and push
                push(string(1, exp[i]));
            } else {
                // It's an operator
                string val1 = pop();
                string val2 = pop();

                int int_val1 = stoi(val1);
                int int_val2 = stoi(val2);
                int result;

                switch (exp[i]) {
                    case '+': result = int_val2 + int_val1; break;
                    case '-': result = int_val2 - int_val1; break;
                    case '*': result = int_val2 * int_val1; break;
                    case '/': result = int_val2 / int_val1; break;
                    default: cout << "Invalid operator\n"; return -1;
                }

                push(to_string(result));
            }
        }
        return stoi(pop());
    }
};

int main() {
    string exp = "231*+9-";  // Equivalent to: 2 + (3 * 1) - 9 = -4
    Evaluate obj(exp.length());
    cout << "Postfix evaluation: " << obj.evaluatePostfix(exp) << endl;
    return 0;
}
