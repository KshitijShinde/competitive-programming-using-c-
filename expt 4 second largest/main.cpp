#include <iostream>
#include <vector>
using namespace std;

int getSL(vector<int>&arr)
{
	int n = arr.size();
	int largest = -1;
	int Slargest = -1;

	for(int i = 0; i<n; i++)
	{
		if (arr[i]>largest)
		{
			largest = arr[i];
		}
	}
	for(int i = 0; i<n; i++)
	{
		if (arr[i]>Slargest && arr[i]!=largest)
		{
			Slargest = arr[i];

		}

	}
	return Slargest;

}
int main()
{
	vector<int>arr= {25,12,69,54,37};
	cout<<getSL(arr);
	return 0;
}