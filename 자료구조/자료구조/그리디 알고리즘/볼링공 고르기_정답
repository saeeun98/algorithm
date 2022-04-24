#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int input;
	cin >> input;

	vector<int> arr;
	for (int i = 0; i < input; i++)
	{
		int text;
		cin >> text;
		arr.push_back(text);
	}

	sort(arr.begin(), arr.end());
	int target = 1;

	for (int i = 0; i < input; i++)
	{
		if (target < arr[i])
			break;
		target += arr[i];
	}

	cout << target;
}
