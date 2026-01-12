#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	int N;

	cin >> N;

	vector<string> arr;
	string buff;

	for (int i = 0; i < N; i++) {
		cin >> buff;
		arr.push_back(buff);
	}

	sort(arr.begin(), arr.end(), [](const string& s1, const string& s2) {
		if (s1.size() == s2.size()) {
			return s1 < s2;
		}
		return s1.size() < s2.size();
	});

	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (auto &i : arr) {
		cout << (i) << endl;
	}


	return 0;
}
