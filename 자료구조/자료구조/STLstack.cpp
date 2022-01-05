#include <stack>
#include <iostream>
using namespace std;

int main(void) {
	stack<int> S;
	S.push(10);
	S.push(20);
	S.push(30);
	cout << S.size() << "\n";
	if (S.empty()) cout << "s is empty\n";
	else cout << "S is not empty" << endl;
	S.pop();
	cout << S.top() << "\n";
	S.pop();
	cout << S.top() << endl;

}