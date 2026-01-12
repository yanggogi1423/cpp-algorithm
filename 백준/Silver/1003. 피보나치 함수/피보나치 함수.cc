#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //  Pre-Computing
    vector<pair<int, int>> fiboList;
    fiboList.push_back({1, 0});
    fiboList.push_back({0, 1});

    for (int i = 2; i <= 40; i++) {
        fiboList.push_back(
                {fiboList[i - 2].first + fiboList[i - 1].first, fiboList[i - 2].second + fiboList[i - 1].second});
    }

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int buff;
        cin >> buff;

        cout << fiboList[buff].first << " " << fiboList[buff].second << "\n";
    }

    return 0;
}