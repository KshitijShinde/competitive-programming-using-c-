#include <iostream>
#include <string>
using namespace std;

// Function to swap characters
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void permute(string &str, int l, int r) {
    if (l == r) {
        cout << str <<',';
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);           
            permute(str, l + 1, r);         
            swap(str[l], str[i]);           
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    permute(str, 0, n - 1);  

    return 0;
}
