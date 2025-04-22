#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPal(string str)
{
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Get input string from the user

    // Call the isPal function and display the result
    if (isPal(input))
        cout << "The string \"" << input << "\" is a palindrome." << endl;
    else
        cout << "The string \"" << input << "\" is not a palindrome." << endl;

    return 0;
}
