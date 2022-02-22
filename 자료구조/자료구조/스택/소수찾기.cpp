#include <iostream>
using namespace std;

bool isPrime(int data) {
	if (data == 1) return false;
	else {
		for (int i = 2; i < data; i++) {
			if (data % i == 0) return false;
		}
		return true;
	}
}

int main(void) {
	int num, cnt = 0;
	cin >> num;

	int* arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		if (isPrime(arr[i]) == true) cnt++;
	}
	cout << cnt;
}