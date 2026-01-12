#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;

    vector<int> primeList;


    for (int i = 2; i <= N; i++) {
        bool isPrime = true;

        for(auto prime : primeList){
            if(prime * prime > i) break;

            if(i % prime == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            primeList.push_back(i);
        }
    }

    for(auto prime : primeList){
        if(prime >= M)
            cout << prime << "\n";
    }


    return 0;
}