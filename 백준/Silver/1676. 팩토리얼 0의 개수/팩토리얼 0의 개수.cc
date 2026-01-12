#include <iostream>

using namespace std;

//  실제 Factorial을 구하는 문제가 아님

int main(void) {

    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        //  사실 2의 배수는 따질 필요도 없을 듯 (2의 배수는 너무 많음 -> 즉, 5의 배수만 따져도 가능하지 않을까? 라는 아이디어)
        //  또한 거듭제곱이 있을 수 있기에 이를 확인하여야 한다.

        int tmp = i;
        while(true){
            if (tmp % 5 == 0) {
                tmp/=5;
                cnt++;
            }
            else break;
        }
    }

    cout << cnt;

    return 0;
}