#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
	if (arr[i - 1] > arr[i])
		return false;
	return true;
}
int main()
{
	vector<int> arr = { 10, 23, 23, 45, 78, 88 };
	cout << (isSorted(arr) ? "Yes\n" : "No\n");
	return 0;
}