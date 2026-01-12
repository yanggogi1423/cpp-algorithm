#include <iostream>
#include <climits>
using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    bool white[N][M];

    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            char tmp;
            cin >> tmp;

            if(tmp == 'W') white[y][x] = true;
            else if(tmp == 'B') white[y][x] = false;
        }
    }

//    for (int y = 0; y < N; y++) {
//        for (int x = 0; x < M; x++) {
//            cout << white[y][x] << " ";
//        }
//        cout << endl;
//    }

    int min = INT_MAX;

    for (int y = 0; y <= N - 8; y++) {   //  Equals도 가능하다.
        for (int x = 0; x <= M - 8; x++) {
            //  8 * 8 Checking
            int cnt = 0;
            bool pre = white[y][x];
            int localMin = 0;
            for (int y2 = y; y2 < 8 + y; y2++) {
                pre = !pre;

                for (int x2 = x; x2 < 8 + x; x2++) {
                    if(pre == white[y2][x2]){
                        cnt++;
                        pre = !white[y2][x2];
                    }
                    else{
                        pre = white[y2][x2];
                    }
                }
            }

            localMin = cnt;
            cnt = 0;
            pre = !white[y][x];

            for (int y2 = y; y2 < 8 + y; y2++) {
                pre = !pre;

                for (int x2 = x; x2 < 8 + x; x2++) {
                    if(pre == white[y2][x2]){
                        cnt++;
                        pre = !white[y2][x2];
                    }
                    else{
                        pre = white[y2][x2];
                    }
                }
            }

            if(cnt < localMin){
                localMin = cnt;
            }

            if(localMin < min){
                min = localMin;
            }
        }
    }

    cout << min;

    return 0;
}