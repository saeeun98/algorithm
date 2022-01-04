#include <iostream>
using namespace std;

int arr[100000] = { 0 };
int top = 0;

bool isEmpty() {
	if (top == 0) return true;
	else false;
}

void push(int data) {
	arr[top] = data;
	top++;
}

void pop() {
	if (isEmpty() == true) return;
	else {
		top--;
	}
}



int main()
{
	int num, cnt = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int data;
		cin >> data;
		if (data == 0)
			pop();
		else
			push(data);
	}

	for (int i = 0; i < top; i++) {
		cnt += arr[i];
	}
	cout << cnt;
	return 0;

}