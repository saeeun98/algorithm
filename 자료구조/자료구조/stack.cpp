#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	pos--;
}

int top() {
	return dat[pos--];
}

int main(void) {
	for (int i = 0; i < 5; i++) {
		push(i);
	}
	for (int i = 0; i < 5; i++) {
		cout << dat[i] << " ";
	}
	cout << endl;
	top();
	for (int i = 0; i < pos; i++) {
		cout << dat[i] << " ";
	}
	cout << endl;
	push(1);
	push(2);
	for (int i = 0; i < pos; i++) {
		cout << dat[i] << " ";
	}
	cout << endl;
	pop();
	for (int i = 0; i < pos; i++) {
		cout << dat[i] << " ";
	}
	
}