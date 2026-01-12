#include <iostream>
using namespace std;

char stack[5];
int top = -1;

void push(char in) {
	top++;
	if (top >= 5) return;

	stack[top] = in;
}

char pop() {
	if (top == -1) return -1;

	char out = stack[top];
	top--;
	return out;
}

char peek() {
	if (top == -1) return -1;
	return stack[top];
}

void reset() {
	top = -1;
}

int main(void) {

	string input;

	while (true) {
		cin >> input;
		if (input == "0") break;

		int leng = input.length();

		for (int i = 0; i < leng; i++) {
			if (i < leng / 2) {
				push(input[i]);
			}
			else if (leng % 2 == 0 && i >= leng / 2) {
				if (peek() == input[i]) {
					pop();
				}
			}
			else if (leng % 2 == 1 && i > leng / 2) {
				if (peek() == input[i]) {
					pop();
				}
			}
		}

		if (pop() == -1) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}

		reset();
	}

	return 0;
}