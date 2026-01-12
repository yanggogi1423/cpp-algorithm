#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string str;
	cin >> str;

	int abc[26] = { 0 };

	int leng = str.length();

	for (int i = 0; i < leng; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			abc[str[i] - 'a']++;
		}
		//	대문자가 들어올 것을 확신
		else {
			abc[str[i] - 'A']++;
		}
	}

	//	find max
	int max = 0;
	int idx = -1;

	bool flag = false;

	for (int i = 0; i < 26; i++) {
		if (max < abc[i]) {
			max = abc[i];
			idx = i;
			flag = false;
		}
		else if (max == abc[i] && max != 0) {
			flag = true;
		}
	}

	if (flag == true) {
		cout << "?" << endl;
	}
	else {
		cout << (char)(idx + 'A') << endl;
	}

	

	return 0;
}