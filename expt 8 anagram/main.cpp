#include <iostream>
#include <string>
#define CHAR 256 // Assuming the character set size is 256
using namespace std;

// Function to check if two strings are anagrams of each other
bool isAnagram(string &S1, string &S2)
{
    if (S1.length() != S2.length()) // If lengths are not equal, they cannot be anagrams
        return false;

    int count[CHAR] = {0}; // Array to keep track of character counts

    for (int i = 0; i < S1.length(); i++)
    {
        count[S1[i]]++; // Increment count for characters in S1
        count[S2[i]]--; // Decrement count for characters in S2
    }

    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0) // If counts don't match for any character
            return false;
    }

    return true; // All counts match, strings are anagrams
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Check if the strings are anagrams
    if (isAnagram(str1, str2))
        cout << "The strings \"" << str1 << "\" and \"" << str2 << "\" are anagrams." << endl;
    else
        cout << "The strings \"" << str1 << "\" and \"" << str2 << "\" are not anagrams." << endl;

    return 0;
}
