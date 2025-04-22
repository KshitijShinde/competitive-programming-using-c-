#include <iostream>
#include <string>
using namespace std;

bool isSubseq(string &S1, string &S2, int n, int m)
{
    int j = 0; // Index for S2
    if (S1 == S2) // If the strings are identical
        return true;

    for (int i = 0; i < n; i++)
    {
        if (S1[i] == S2[j]) // Matching characters
            j++;
        if (j == m) // All characters of S2 are found in S1 in sequence
            return true;
    }
    return false; // S2 is not a subsequence of S1
}

int main()
{
    string srcString, findString;
    cout << "Enter the source string: ";
    getline(cin, srcString);
    cout << "Enter the string to find: ";
    getline(cin, findString);

    int n = srcString.length();
    int m = findString.length();

    // Check if findString is a subsequence of srcString
    if (isSubseq(srcString, findString, n, m))
        cout << "The string \"" << findString << "\" is a subsequence of \"" << srcString << "\"." << endl;
    else
        cout << "The string \"" << findString << "\" is not a subsequence of \"" << srcString << "\"." << endl;

    return 0;
}
