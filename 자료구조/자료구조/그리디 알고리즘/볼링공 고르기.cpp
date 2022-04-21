#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			cout << arr[i] << arr[j] << endl;
			if (arr[i] == arr[j]) continue;
			else cnt++;
		}
	}

	cout << cnt;
}