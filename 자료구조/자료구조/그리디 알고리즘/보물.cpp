#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(int size, vector<int> A, vector<int> B) {

	int result = 0;


	for (int i = 0; i < size; i++) {
		sort(A.begin(), A.end());
		sort(B.begin(), B.end(), greater<>());
		/*for (int j = 0; j < A.size(); j++) {
			cout << A[j] << " ";
		}
		cout << endl;
		for (int j = 0; j < B.size(); j++) {
			cout << B[j] << " ";
		}
		if (i == 0 && (A[0] == 0 || B[0] == 0)) {
			result = 0;
		}*/
		//cout << endl;
		result += A[0] * B[0];
		//cout << "result" << result << endl;
		A.erase(A.begin());
		B.erase(B.begin());
	}


	return result;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> A;
	vector<int> B;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		B.push_back(b);
	}

	cout << solution(A.size(), A, B);
}