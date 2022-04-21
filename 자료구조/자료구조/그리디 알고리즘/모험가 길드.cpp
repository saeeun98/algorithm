#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end(), greater<int>()); //내림차순 정렬

	int i = 0;
	int cnt = 0;
	while (true)
	{
		if (i < N) {
			cnt++;
			i += arr[i];
			continue;
		}
		if (i >= N) break;
	}

	cout << cnt;


}

